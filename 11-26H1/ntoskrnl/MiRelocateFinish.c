/*
 * XREFs of MiRelocateFinish @ 0x14099C5F4
 * Callers:
 *     MiRelocateImage @ 0x14099B784 (MiRelocateImage.c)
 * Callees:
 *     PsGetSessionIdEx @ 0x1402ED8A0 (PsGetSessionIdEx.c)
 *     MI_LOCK_RELOCATIONS_EXCLUSIVE @ 0x1404A08A4 (MI_LOCK_RELOCATIONS_EXCLUSIVE.c)
 *     MI_UNLOCK_RELOCATIONS_EXCLUSIVE @ 0x1404A7D54 (MI_UNLOCK_RELOCATIONS_EXCLUSIVE.c)
 *     MiSetDeleteOnClose @ 0x14050012C (MiSetDeleteOnClose.c)
 *     MiWalkEntireImage @ 0x140ACA024 (MiWalkEntireImage.c)
 *     MiMarkImageActive @ 0x140B01254 (MiMarkImageActive.c)
 *     SeSetImageBaseAddress @ 0x140B37698 (SeSetImageBaseAddress.c)
 */

__int64 __fastcall MiRelocateFinish(__int64 **a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  __int64 *v4; // rsi
  __int64 v7; // rbx
  unsigned __int64 v8; // r13
  __int64 v9; // r14
  __int64 v10; // rbp
  struct _KTHREAD *CurrentThread; // r15
  int v12; // ebx
  int SessionId; // ecx
  _QWORD v15[2]; // [rsp+20h] [rbp-58h] BYREF
  int v16; // [rsp+30h] [rbp-48h]
  int v17; // [rsp+34h] [rbp-44h]
  __int64 v18; // [rsp+38h] [rbp-40h]
  __int64 (__fastcall *v19)(); // [rsp+40h] [rbp-38h]

  v4 = *a1;
  v7 = **a1;
  v8 = (*a1)[12] & 0xFFFFFFFFFFFFFFF8uLL;
  v9 = (__int64)a1[7];
  v10 = *(_QWORD *)(v7 + 56);
  *((_DWORD *)a1 + 8) |= 0x20u;
  CurrentThread = KeGetCurrentThread();
  MI_LOCK_RELOCATIONS_EXCLUSIVE((__int64)CurrentThread, v9, a3, a4);
  *(_QWORD *)(v8 + 32) = v9;
  *(_QWORD *)(v7 + 32) = a2;
  *(_QWORD *)v10 += *(_QWORD *)(v9 + 40);
  MiMarkImageActive(v4);
  if ( (v4[7] & 0x800) != 0 )
    MiSetDeleteOnClose((__int64)v4, 0);
  if ( (MiFlags & 0x8000) != 0
    && (*((_DWORD *)v4 + 23) & 0xC0000) != 0
    && (v12 = SeSetImageBaseAddress(*(_QWORD *)(v8 + 40) & 0xFFFFFFFFFFFFFFF8uLL, a2), v12 < 0) )
  {
    MI_UNLOCK_RELOCATIONS_EXCLUSIVE((__int64)CurrentThread, v9);
  }
  else
  {
    if ( *((_DWORD *)a1 + 5) )
      SessionId = -1;
    else
      SessionId = PsGetSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
    if ( ((_DWORD)a1[4] & 0x188) == 0x100 )
    {
      v12 = 0;
    }
    else
    {
      v17 = SessionId;
      v19 = MiWalkImageApplyRelocationToPage;
      v15[1] = 0LL;
      v18 = 84LL;
      v15[0] = v4;
      v16 = 2;
      v12 = MiWalkEntireImage(v15);
    }
    MI_UNLOCK_RELOCATIONS_EXCLUSIVE((__int64)CurrentThread, v9);
    if ( v12 >= 0 && ((_DWORD)a1[4] & 0x100) == 0 )
      *(_BYTE *)(v10 + 51) |= 4u;
  }
  return (unsigned int)v12;
}
