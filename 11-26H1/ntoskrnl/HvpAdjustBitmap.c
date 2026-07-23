/*
 * XREFs of HvpAdjustBitmap @ 0x140A885EC
 * Callers:
 *     HvpAdjustHiveFreeDisplay @ 0x140A88570 (HvpAdjustHiveFreeDisplay.c)
 * Callees:
 *     RtlClearBits @ 0x14035AF40 (RtlClearBits.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall HvpAdjustBitmap(__int64 a1, unsigned int a2, __int64 a3)
{
  unsigned int *v3; // rdi
  unsigned int v4; // ebx
  unsigned int v6; // ebp
  unsigned int v7; // esi
  unsigned int v8; // esi
  __int64 v9; // rdx
  void *v10; // rax
  void *v11; // r14
  const void *v12; // r15
  unsigned int v14; // eax

  v3 = (unsigned int *)(a3 + 8);
  v4 = a2 >> 12;
  v6 = 256;
  v7 = ((a2 >> 12) + 7) >> 3;
  if ( v7 )
    v8 = (v7 + 255) & 0xFFFFFF00;
  else
    v8 = 256;
  v9 = *v3;
  if ( (_DWORD)v9 )
  {
    v14 = (unsigned int)(v9 + 7) >> 3;
    if ( v14 )
      v6 = (v14 + 255) & 0xFFFFFF00;
  }
  else
  {
    v6 = 0;
  }
  if ( v8 <= *(_DWORD *)a3 )
  {
    *v3 = v4;
    if ( (unsigned int)v9 < v4 )
      RtlClearBits((PRTL_BITMAP)(a3 + 8), v9, v4 - v9);
    return 0LL;
  }
  LOBYTE(v9) = 1;
  v10 = (void *)guard_dispatch_icall_no_overrides(v8, v9);
  v11 = v10;
  if ( v10 )
  {
    *(_DWORD *)a3 = v8;
    v12 = (const void *)*((_QWORD *)v3 + 1);
    memset_0(v10, 0, v8);
    *v3 = v4;
    *((_QWORD *)v3 + 1) = v11;
    if ( v12 )
    {
      memmove(v11, v12, v6);
      guard_dispatch_icall_no_overrides((__int64)v12, v6);
    }
    return 0LL;
  }
  return 3221225626LL;
}
