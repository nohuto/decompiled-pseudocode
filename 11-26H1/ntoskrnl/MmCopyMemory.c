/*
 * XREFs of MmCopyMemory @ 0x140339450
 * Callers:
 *     <none>
 * Callees:
 *     MiUnlockProtoPoolPage @ 0x1402D3E40 (MiUnlockProtoPoolPage.c)
 *     MiUnlockSystemVa @ 0x1402E5200 (MiUnlockSystemVa.c)
 *     MiCheckPhysicalAddressRange @ 0x140338554 (MiCheckPhysicalAddressRange.c)
 *     MiTranslatePageForCopy @ 0x140338D4C (MiTranslatePageForCopy.c)
 *     MiCopySinglePage @ 0x14033B248 (MiCopySinglePage.c)
 *     MiGetEffectivePagePriorityThread @ 0x1403719B0 (MiGetEffectivePagePriorityThread.c)
 *     MiPrefetchVirtualMemory @ 0x1403A0710 (MiPrefetchVirtualMemory.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     ZwReadVirtualMemoryEx @ 0x1407262F0 (ZwReadVirtualMemoryEx.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

__int64 __fastcall MmCopyMemory(_BYTE *a1, unsigned __int64 a2, unsigned __int64 a3, int a4, _QWORD *a5)
{
  int v9; // r8d
  __int16 v11; // cx
  struct _KTHREAD *CurrentThread; // r13
  int v13; // edi
  char v14; // r12
  unsigned __int64 v15; // r14
  unsigned __int64 v16; // rax
  __int64 v17; // r15
  int v18; // eax
  __int64 v19; // r13
  _BYTE *v20; // r15
  _BYTE *v21; // rcx
  char v22; // r12
  unsigned __int64 v23; // rdx
  unsigned __int64 v24; // r12
  __int64 v25; // rcx
  int v26; // [rsp+30h] [rbp-D0h]
  _BYTE *v27; // [rsp+38h] [rbp-C8h]
  unsigned __int64 v28; // [rsp+40h] [rbp-C0h] BYREF
  char v29[8]; // [rsp+48h] [rbp-B8h]
  __int64 v30; // [rsp+50h] [rbp-B0h]
  __int128 v31; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int64 v32; // [rsp+68h] [rbp-98h] BYREF
  struct _KTHREAD *v33; // [rsp+70h] [rbp-90h]
  _QWORD *v34; // [rsp+78h] [rbp-88h]
  _BYTE v35[24]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v36; // [rsp+98h] [rbp-68h]

  v27 = a1;
  v34 = a5;
  *(_DWORD *)v29 = a4;
  memset_0(v35, 0, 0x80uLL);
  v30 = 0LL;
  *a5 = 0LL;
  if ( !a4 || (a4 & 0xFFFFFFFC) != 0 || ((a4 - 1) & a4) != 0 || KeGetCurrentIrql() > 1u )
    return 3221225714LL;
  v9 = a4 & 1;
  v26 = v9;
  if ( (a4 & 1) != 0 )
  {
    if ( !(unsigned int)MiCheckPhysicalAddressRange(a2, a3) )
      return 3221225496LL;
    v9 = a4 & 1;
  }
  else
  {
    if ( a3 + a2 <= a2 )
      return 3221225496LL;
    if ( a2 < 0x7FFFFFFF0000LL )
    {
      if ( a3 + a2 >= 0x7FFFFFFF0000LL )
        return 3221225496LL;
      return ZwReadVirtualMemoryEx(-1LL, a2, a1, a3, a5, 1);
    }
    if ( a2 < 0xFFFF800000000000uLL )
      return 3221225496LL;
    v11 = a2;
  }
  if ( (a3 + (v11 & 0xFFF) + 4095LL) >> 12 < 0x100000000LL )
  {
    CurrentThread = KeGetCurrentThread();
    v13 = 0;
    v33 = CurrentThread;
    v14 = a2;
    v15 = 4096 - (a2 & 0xFFF);
    if ( v15 > a3 )
      v15 = a3;
    if ( v9 )
      v16 = a2 >> 12;
    else
      v16 = -1LL;
    v28 = v16;
    while ( 1 )
    {
      if ( !a3 )
      {
LABEL_37:
        *v34 += v30;
        return (unsigned int)v13;
      }
      v17 = 0LL;
      *(_QWORD *)&v31 = 0LL;
      v32 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
      if ( v9 )
        break;
      v18 = MiTranslatePageForCopy(a2, (__int64)v35, &v28, (__int64 *)&v31, &v32);
      v13 = v18;
      if ( v18 < 0 )
      {
        if ( v18 != -1073741608 )
          goto LABEL_37;
        v31 = 0LL;
        MiGetEffectivePagePriorityThread(CurrentThread);
        *(_QWORD *)&v31 = a2;
        v25 = a3;
        if ( a3 > 0x200000 - (a2 & 0x1FFFFF) )
          v25 = 0x200000 - (a2 & 0x1FFFFF);
        *((_QWORD *)&v31 + 1) = v25;
        if ( a2 <= qword_140E2DE50 && a2 >= qword_140E2DE40 )
        {
          v13 = -1073741585;
          goto LABEL_37;
        }
        v13 = MiPrefetchVirtualMemory(1LL, &v31, 1LL);
        if ( v13 < 0 )
          goto LABEL_37;
        v9 = v26;
      }
      else
      {
        v19 = v36;
        if ( v18 == 273 )
        {
          MiUnlockSystemVa((__int64)v35);
          v20 = v27;
          v13 = 0;
          if ( v15 )
          {
            v21 = v27;
            v22 = v14 - (_BYTE)v27;
            v23 = v15;
            do
            {
              *v21 = *((_BYTE *)&v32 + ((v22 + (_BYTE)v21) & 7));
              ++v21;
              --v23;
            }
            while ( v23 );
          }
          goto LABEL_33;
        }
        v17 = v31;
LABEL_27:
        v24 = v28;
        v13 = MiCopySinglePage(v27, v29[0]);
        if ( v19 )
        {
          _InterlockedAnd64((volatile signed __int64 *)(48 * v24 - 0x21FFFFFFFFE8LL), 0x7FFFFFFFFFFFFFFFuLL);
          if ( v17 )
            MiUnlockProtoPoolPage(v17, 0x11u);
          MiUnlockSystemVa((__int64)v35);
        }
        if ( v13 < 0 )
          goto LABEL_37;
        v20 = v27;
LABEL_33:
        v30 += v15;
        ++v28;
        a3 -= v15;
        v9 = v26;
        a2 += v15;
        CurrentThread = v33;
        v27 = &v20[v15];
        v15 = a3;
        if ( a3 > 0x1000 )
          v15 = 4096LL;
        v14 = 0;
      }
    }
    v19 = 0LL;
    goto LABEL_27;
  }
  return 3221225713LL;
}
