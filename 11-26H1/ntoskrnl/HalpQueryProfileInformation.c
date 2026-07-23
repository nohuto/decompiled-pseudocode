/*
 * XREFs of HalpQueryProfileInformation @ 0x140B1B8D8
 * Callers:
 *     HaliQuerySystemInformation @ 0x140BF38E0 (HaliQuerySystemInformation.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x140211F80 (KeQueryActiveProcessorCountEx.c)
 *     HalpQueryProfileSourceList @ 0x140433340 (HalpQueryProfileSourceList.c)
 *     HalpQueryProfileSource @ 0x140435CE8 (HalpQueryProfileSource.c)
 *     HalpCollectProfileCorruptionStatus @ 0x1404ED9E8 (HalpCollectProfileCorruptionStatus.c)
 *     HalpCollectProfileOwnershipStatus @ 0x140582368 (HalpCollectProfileOwnershipStatus.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpQueryProfileInformation(__int64 a1, __int64 a2, __int64 a3, unsigned int *a4)
{
  __int64 v4; // rax
  unsigned int v8; // edx
  __int64 v10; // r10
  __int64 v11; // rax
  int v12; // ecx
  int v13; // r9d
  int v14; // r8d
  __int64 v15; // rax
  int v16; // eax
  __int64 v17; // rbp
  __int64 v18; // rax
  int v19; // eax
  int v20; // eax

  switch ( (_DWORD)a1 )
  {
    case 1:
      return (unsigned int)HalpQueryProfileSource(a2, a3, a4);
    case 0x14:
      return (unsigned int)HalpQueryProfileSourceList(a2, a3, a4);
    case 0x2C:
      if ( (_DWORD)a2 )
      {
        v8 = 0;
        *(_BYTE *)a3 = HalpProfileInterface == &DefaultProfileInterface;
        *a4 = 1;
        return v8;
      }
      *a4 = 1;
      return (unsigned int)-1073741820;
  }
  if ( (_DWORD)a1 != 45 )
  {
    if ( (_DWORD)a1 == 52 )
    {
      return (unsigned int)HalpCollectProfileCorruptionStatus((unsigned int **)a3, a2, a4);
    }
    else if ( (_DWORD)a1 == 53 )
    {
      return (unsigned int)HalpCollectProfileOwnershipStatus((unsigned int *)a3, a2, a4);
    }
    else
    {
      return (unsigned int)guard_dispatch_icall_no_overrides(a1, a2);
    }
  }
  if ( (unsigned int)a2 < 4 )
  {
LABEL_18:
    *a4 = 12;
    return (unsigned int)-1073741820;
  }
  LODWORD(v4) = KeGetPcr()->Prcb.Number;
  if ( (_DWORD)a2 != 4 )
  {
    if ( (unsigned int)a2 >= 0xC )
    {
      v17 = *(unsigned int *)(a3 + 8);
      if ( (unsigned int)v17 < KeQueryActiveProcessorCountEx(0xFFFFu) )
      {
        _mm_lfence();
        v8 = 0;
        v18 = *(_QWORD *)(KiProcessorBlock[v17] + 88);
        if ( v18 )
          v19 = *(_DWORD *)(v18 + 4);
        else
          v19 = 0;
        *(_DWORD *)a3 = v19;
        if ( *(_QWORD *)(KiProcessorBlock[v17] + 88) == -24LL )
          v20 = 0;
        else
          v20 = *(_DWORD *)(*(_QWORD *)(KiProcessorBlock[v17] + 88) + 28LL);
        *(_DWORD *)(a3 + 4) = v20;
        *a4 = 12;
      }
      else
      {
        *a4 = 12;
        return (unsigned int)-1073741811;
      }
      return v8;
    }
    goto LABEL_18;
  }
  *a4 = 4;
  v10 = KiProcessorBlock[v4];
  v8 = 0;
  v11 = *(_QWORD *)(v10 + 88);
  if ( !v11 )
  {
    v12 = 0;
LABEL_20:
    v13 = *(_DWORD *)(v11 + 28);
    goto LABEL_21;
  }
  v12 = *(_DWORD *)(v11 + 4);
  v13 = 0;
  if ( v11 != -24 )
    goto LABEL_20;
LABEL_21:
  v14 = 0;
  v15 = v11 + 48;
  if ( v15 )
    v14 = *(_DWORD *)(v15 + 4);
  if ( *(_QWORD *)(v10 + 88) == -72LL )
    v16 = 0;
  else
    v16 = *(_DWORD *)(*(_QWORD *)(v10 + 88) + 76LL);
  *(_DWORD *)a3 = v12 + v13 + v14 + v16;
  return v8;
}
