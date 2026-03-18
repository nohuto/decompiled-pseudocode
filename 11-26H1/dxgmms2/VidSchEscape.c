/*
 * XREFs of VidSchEscape @ 0x1400564B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@AcquireSpinLock@@QEAAXXZ @ 0x140007FB0 (-Release@AcquireSpinLock@@QEAAXXZ.c)
 *     ??0AcquireSpinLock@@QEAA@AEA_K_N1@Z @ 0x14002BF80 (--0AcquireSpinLock@@QEAA@AEA_K_N1@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14002E900 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     VidSchiForceTdr @ 0x140059150 (VidSchiForceTdr.c)
 */

__int64 __fastcall VidSchEscape(__int64 a1, __int64 a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rcx
  __int64 v6; // rcx
  unsigned int v7; // eax
  __int64 v8; // rbp
  __int64 v9; // rbp
  int v10; // ecx
  unsigned int v11; // eax
  int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 *v15; // rax
  __int64 v16; // rcx
  _BYTE v18[48]; // [rsp+50h] [rbp-38h] BYREF

  v4 = -1073741811;
  if ( !*(_DWORD *)a2 )
  {
    v10 = *(_DWORD *)(a2 + 4) != 0;
    v11 = *(_DWORD *)(a1 + 2824) & 0xFFFFFFFE;
    goto LABEL_38;
  }
  if ( *(_DWORD *)a2 != 2 )
  {
    if ( *(_DWORD *)a2 != 4 )
    {
      switch ( *(_DWORD *)a2 )
      {
        case 5:
          g_TdrConfig[6] = *(_DWORD *)(a2 + 4);
          g_TdrConfig[7] = *(_DWORD *)(a2 + 8);
          return 0;
        case 6:
          VidSchiForceTdr(a1);
          return 0;
        case 7:
          *(_DWORD *)(a1 + 256) = *(_DWORD *)(a2 + 4);
          return 0;
        case 8:
          if ( !(unsigned __int8)RtlIsZeroMemory(a2 + 32, 16LL) )
          {
            WdLogSingleEntry1(1LL, -1073741811LL);
            WdLogGlobalForLineNumber = 9496;
LABEL_10:
            DxgkLogInternalTriageEvent(v5, 0x40000LL);
            return v4;
          }
          v6 = *(unsigned int *)(a2 + 12);
          v7 = *(_DWORD *)(a2 + 16);
          if ( !(_DWORD)v6 )
          {
            v8 = v7;
            if ( v7 > *(_DWORD *)(a1 + 48) )
            {
              WdLogSingleEntry1(1LL, v7);
              WdLogGlobalForLineNumber = 9508;
              goto LABEL_10;
            }
            AcquireSpinLock::AcquireSpinLock((AcquireSpinLock *)v18, (unsigned __int64 *)(a1 + 2016), 1, 0);
            *(_DWORD *)(*(_QWORD *)(a1 + 8 * v8 + 3448) + 83096LL) = *(_DWORD *)(a2 + 28);
LABEL_19:
            v4 = 0;
            AcquireSpinLock::Release((AcquireSpinLock *)v18);
            return v4;
          }
          if ( (_DWORD)v6 == 1 )
          {
            v9 = *(unsigned int *)(a2 + 16);
            if ( v7 > *(_DWORD *)(a1 + 48) )
            {
              WdLogSingleEntry1(v6, *(unsigned int *)(a2 + 16));
              WdLogGlobalForLineNumber = 9522;
              goto LABEL_10;
            }
            AcquireSpinLock::AcquireSpinLock((AcquireSpinLock *)v18, (unsigned __int64 *)(a1 + 2016), 1, 0);
            *(_DWORD *)(*(_QWORD *)(a1 + 8 * v9 + 3448) + 83092LL) = *(_DWORD *)(a2 + 24);
            goto LABEL_19;
          }
          if ( (_DWORD)v6 != 2 )
            return v4;
          *(_BYTE *)(*((_QWORD *)DXGPROCESS::GetCurrent() + 8) + 138LL) = *(_BYTE *)(a2 + 20);
          return 0;
      }
      return v4;
    }
    v10 = *(_DWORD *)(a2 + 4) != 0 ? 0x100 : 0;
    v11 = *(_DWORD *)(a1 + 2824) & 0xFFFFFEFF;
LABEL_38:
    *(_DWORD *)(a1 + 2824) = v11 | v10;
    return 0;
  }
  v12 = *(_DWORD *)(a2 + 4);
  switch ( v12 )
  {
    case 4:
      *(_BYTE *)(a1 + 3284) |= 8u;
      return 0;
    case 5:
      _InterlockedAnd((volatile signed __int32 *)(a1 + 44), 0xFFFFFFF8);
      return 0;
    case 8:
      v13 = *(unsigned int *)(a2 + 8);
      if ( (unsigned int)v13 < *(_DWORD *)(a1 + 88) )
      {
        v14 = (unsigned int)v13;
        v15 = *(__int64 **)(a1 + 696);
        if ( (unsigned int)v13 < *(_DWORD *)(a1 + 768) )
          v15 += v13;
        v16 = *v15;
        if ( (*(_DWORD *)(*v15 + 12) & 2) != 0 )
        {
          *(_DWORD *)(v16 + 2148) = 1;
          *(_BYTE *)(v16 + 2146) = 1;
          *(_QWORD *)(a1 + 1496) = MEMORY[0xFFFFF78000000320];
          KeSetEvent((PRKEVENT)(a1 + 1464), 0, 0);
          return v4;
        }
        RtlSetBitEx(a1 + 648, v14);
        return 0;
      }
      break;
  }
  return v4;
}
