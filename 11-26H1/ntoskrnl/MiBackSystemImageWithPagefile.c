/*
 * XREFs of MiBackSystemImageWithPagefile @ 0x14086A544
 * Callers:
 *     FsRtlSetDriverBacking @ 0x140792A50 (FsRtlSetDriverBacking.c)
 *     MiBackSystemImageWithPagefile @ 0x14086A544 (MiBackSystemImageWithPagefile.c)
 * Callees:
 *     MI_IS_PHYSICAL_ADDRESS @ 0x14024E230 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiUnlockLoaderEntry @ 0x14049E30C (MiUnlockLoaderEntry.c)
 *     MiGetBaseLoaderPortion @ 0x1404EE710 (MiGetBaseLoaderPortion.c)
 *     MiLockLoaderEntry @ 0x1405208A8 (MiLockLoaderEntry.c)
 *     MiBackSingleImageWithPagefile @ 0x14086A4B0 (MiBackSingleImageWithPagefile.c)
 *     MiBackSystemImageWithPagefile @ 0x14086A544 (MiBackSystemImageWithPagefile.c)
 */

__int64 __fastcall MiBackSystemImageWithPagefile(__int64 a1, unsigned int a2)
{
  __int64 BaseLoaderPortion; // rax
  __int64 v5; // rdx
  struct _KLOCK_ENTRIES *v6; // r9
  __int64 v7; // rbp
  __int64 v8; // r8
  unsigned __int64 v9; // rbx
  int v10; // r13d
  unsigned __int64 v11; // rsi
  unsigned __int64 v12; // rcx
  _QWORD *v13; // rax
  __int64 *v14; // r12
  __int64 v15; // r15
  __int128 v17; // [rsp+20h] [rbp-38h] BYREF

  v17 = 0LL;
  BaseLoaderPortion = MiGetBaseLoaderPortion(a1);
  v7 = BaseLoaderPortion;
  v8 = *(unsigned int *)(BaseLoaderPortion + 184);
  if ( (v8 & 0x20) != 0 || (*(_DWORD *)(BaseLoaderPortion + 184) & 0x40) != 0 )
  {
    if ( a2 )
      MiUnlockLoaderEntry(a1, 0);
    return 0LL;
  }
  else
  {
    if ( v5
      && (*(_DWORD *)(BaseLoaderPortion + 184) & 0x10) == 0
      && !(unsigned int)MI_IS_PHYSICAL_ADDRESS(*(_QWORD *)(a1 + 48)) )
    {
      MiBackSingleImageWithPagefile(a1);
    }
    v9 = *(_QWORD *)(a1 + 136);
    v10 = 0;
    if ( v9 == 1 || v9 == -2LL )
      goto LABEL_30;
    if ( (v9 & 1) != 0 )
    {
      *(_QWORD *)&v17 = 1LL;
      *((_QWORD *)&v17 + 1) = v9 & 0xFFFFFFFFFFFFFFFEuLL;
      v9 = (unsigned __int64)&v17;
    }
    v11 = 0LL;
    *(_DWORD *)(v7 + 184) |= 0x40u;
    v12 = *(_QWORD *)v9;
    if ( *(_QWORD *)v9 )
    {
      v13 = (_QWORD *)(v9 + 8);
      while ( *v13 )
      {
        if ( *(_QWORD *)(*v13 + 136LL) != 1LL )
          goto LABEL_17;
        ++v11;
        ++v13;
        if ( v11 >= v12 )
          goto LABEL_16;
      }
    }
    else
    {
LABEL_16:
      if ( v11 != v12 )
      {
LABEL_17:
        if ( a2 )
          MiUnlockLoaderEntry(a1, 0);
        if ( v11 < *(_QWORD *)v9 )
        {
          v14 = (__int64 *)(v9 + 8 * (v11 + 1));
          do
          {
            v15 = *v14;
            if ( !*v14 )
              break;
            if ( *(_QWORD *)(v15 + 136) != 1LL )
            {
              if ( a2 )
                MiLockLoaderEntry(*v14, 0, v8, v6);
              v10 = MiBackSystemImageWithPagefile(v15, a2);
              if ( v10 < 0 )
                break;
            }
            ++v11;
            ++v14;
          }
          while ( v11 < *(_QWORD *)v9 );
        }
        if ( a2 )
          MiLockLoaderEntry(a1, 0, v8, v6);
      }
    }
    *(_DWORD *)(v7 + 184) &= ~0x40u;
    if ( v10 >= 0 )
LABEL_30:
      *(_DWORD *)(v7 + 184) |= 0x20u;
    if ( a2 )
      MiUnlockLoaderEntry(a1, 0);
    return (unsigned int)v10;
  }
}
