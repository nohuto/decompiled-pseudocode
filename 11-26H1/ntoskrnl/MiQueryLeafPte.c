/*
 * XREFs of MiQueryLeafPte @ 0x1403DD590
 * Callers:
 *     <none>
 * Callees:
 *     MiIdentifyPfnWrapper @ 0x1402D2DA0 (MiIdentifyPfnWrapper.c)
 *     MiLocateCloneAddress @ 0x14036D7EC (MiLocateCloneAddress.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

__int64 __fastcall MiQueryLeafPte(__int64 a1, _QWORD *a2, int a3)
{
  __int64 v3; // r9
  unsigned __int64 v4; // rdi
  ULONG_PTR v5; // r8
  __int64 v6; // r10
  unsigned __int64 v7; // rcx
  __int64 v8; // rbx
  int v9; // r11d
  char *v10; // rax
  __int64 v11; // rdx
  unsigned __int64 v12; // rax
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // r9
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rax
  unsigned int v20; // edi
  _KPROCESS *v21; // rcx
  int i; // edx
  int v23; // esi
  __int64 v24; // rcx
  _KPROCESS *Process; // rdx
  unsigned __int64 KernelWaitTime; // r8
  __int64 v27; // rcx
  __int64 v28; // rdx
  char v29; // dl
  _KPROCESS *v30; // r11
  unsigned __int64 v31; // r8
  __int64 v32; // r8
  __int64 v33; // rcx
  __int64 v34; // rax
  __int64 v35; // rax
  unsigned __int64 v36; // rcx
  __int64 v37; // rbx

  v3 = *(_QWORD *)(a1 + 184);
  v4 = (__int64)((_QWORD)a2 << 25) >> 16;
  if ( v4 >= qword_140E2DFC8 )
  {
    v33 = qword_140E2DFE0;
    if ( !qword_140E2DFE0 )
    {
      v33 = 276840448LL;
      qword_140E2DFF0 = 0x10000000LL;
      qword_140E2DFE0 = 276840448LL;
      qword_140E2DFE8 = 276824064LL;
    }
    if ( v4 < v33 + qword_140E2DFC8 )
      return 0LL;
  }
  if ( a3 >= 1 || (*a2 & 1) == 0 )
    return 0LL;
  v5 = (*a2 >> 12) & 0xFFFFFFFFFFLL;
  v6 = 48 * v5 - 0x220000000000LL;
  if ( (*(_DWORD *)v3 & 1) != 0 )
  {
    v7 = *(_QWORD *)(v3 + 16) + 1LL;
    *(_QWORD *)(v3 + 16) = v7;
    if ( v7 < *(_QWORD *)(v3 + 24) )
    {
      v8 = *(_QWORD *)(v3 + 8) + 8 * v7;
      *(_QWORD *)(v8 - 8) ^= (v4 ^ *(_QWORD *)(v8 - 8)) & 0xFFFFFFFFFFFFF000uLL;
      v9 = dword_140E2D804;
      if ( dword_140E2D800 > (unsigned int)dword_140E2D804
        || (v10 = (char *)qword_140E2D860 + 16 * dword_140E2D800, v5 < *(_QWORD *)v10)
        || dword_140E2D800 != dword_140E2D804 && v5 >= *((_QWORD *)v10 + 2) )
      {
        for ( i = 0; ; i = v23 + 1 )
        {
          while ( 1 )
          {
            if ( v9 < i )
              KeBugCheckEx(0x1Au, 0x5180uLL, v5, 0LL, 0LL);
            v23 = (i + v9) >> 1;
            v24 = 16LL * v23;
            v10 = (char *)qword_140E2D860 + v24;
            if ( v5 >= *(_QWORD *)((char *)qword_140E2D860 + v24) )
              break;
            if ( !v23 )
              KeBugCheckEx(0x1Au, 0x5180uLL, v5, (ULONG_PTR)qword_140E2D860 + v24, 0LL);
            v9 = v23 - 1;
          }
          if ( v23 == dword_140E2D804 || v5 < *((_QWORD *)v10 + 2) )
            break;
        }
        dword_140E2D800 = (i + v9) >> 1;
      }
      *(_QWORD *)(v8 - 8) = ((unsigned __int64)*((unsigned int *)v10 + 2) << 9) ^ (*(_QWORD *)(v8 - 8) ^ ((unsigned __int64)*((unsigned int *)v10 + 2) << 9)) & 0xFFFFFFFFFFFFF1FFuLL;
      *(_QWORD *)(v8 - 8) = *(_QWORD *)(v8 - 8) & 0xFFFFFFFFFFFFFEFFuLL | (*(_QWORD *)(v6 + 40) >> 55) & 0x100LL;
      if ( *(__int64 *)(v6 + 40) < 0 )
      {
        if ( (*(_DWORD *)v3 & 2) != 0 )
        {
          v14 = *(_QWORD *)(v8 - 8) & 0xFFFFFFFFFFFFF11FuLL | 0xE0;
        }
        else
        {
          if ( (*(_QWORD *)(v6 + 24) & 0x3FFFFFFFFFFFFFFFuLL) < 7 )
            v34 = *(_QWORD *)(v6 + 24) & 0x3FFFFFFFFFFFFFFFLL;
          else
            v34 = 7LL;
          v14 = (32 * v34) ^ (*(_QWORD *)(v8 - 8) ^ (32 * v34)) & 0xFFFFFFFFFFFFFF1FuLL;
        }
        *(_QWORD *)(v8 - 8) = v14;
        v15 = ((v4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        v16 = *(_QWORD *)v15;
        if ( v15 < 0xFFFFF6FB7DBED000uLL || v15 > 0xFFFFF6FB7DBED7F8uLL )
        {
          v17 = *(_QWORD *)v15;
          v18 = v16 >> 60;
        }
        else
        {
          if ( (v16 & 1) != 0 && ((v16 & 0x20) == 0 || (v16 & 0x42) == 0) && (MiFlags & 0x1800000) != 0 )
          {
            Process = KeGetCurrentThread()->ApcState.Process;
            if ( Process->AddressPolicy != 1 )
            {
              KernelWaitTime = Process[2].KernelWaitTime;
              if ( KernelWaitTime )
              {
                v27 = *(_QWORD *)(KernelWaitTime + 8 * ((v15 >> 3) & 0x1FF));
                if ( (v27 & 0x20) != 0 )
                  v16 |= 0x20uLL;
                v28 = v16 | 0x42;
                if ( (v27 & 0x42) == 0 )
                  v28 = v16;
                v16 = v28;
              }
            }
          }
          v17 = *(_QWORD *)v15;
          v18 = v16 >> 60;
          v29 = *(_QWORD *)v15;
          if ( (v29 & 1) != 0 && ((v17 & 0x20) == 0 || (v17 & 0x42) == 0) && (MiFlags & 0x1800000) != 0 )
          {
            v30 = KeGetCurrentThread()->ApcState.Process;
            if ( v30->AddressPolicy != 1 )
            {
              v31 = v30[2].KernelWaitTime;
              if ( v31 )
              {
                v32 = *(_QWORD *)(v31 + 8 * ((v15 >> 3) & 0x1FF));
                if ( (v32 & 0x20) != 0 )
                  v29 = v17 | 0x20;
                LOBYTE(v17) = v29 | 0x42;
                if ( (v32 & 0x42) == 0 )
                  LOBYTE(v17) = v29;
              }
            }
          }
        }
        v19 = v18 & 7;
        if ( (_DWORD)v19 )
        {
          if ( (v17 & 0x18) == 8 )
          {
            v12 = ((unsigned int)v19 | 0x18) ^ (*(_QWORD *)(v8 - 8) ^ ((unsigned int)v19 | 0x18)) & 0xFFFFFFFFFFFFFFE0uLL;
            goto LABEL_11;
          }
          if ( (v17 & 0x10) != 0 )
          {
            v12 = ((unsigned int)v19 | 8) ^ (*(_QWORD *)(v8 - 8) ^ ((unsigned int)v19 | 8)) & 0xFFFFFFFFFFFFFFE0uLL;
            goto LABEL_11;
          }
        }
        else
        {
          v20 = (*(_DWORD *)(v6 + 16) >> 5) & 0x1F;
          if ( *(__int64 *)(v6 + 8) > 0 && (*(_QWORD *)(v6 + 40) & 0x10000000000LL) == 0 )
          {
            v35 = (unsigned int)MmMakeProtectNotWriteCopy[v20];
            v12 = (unsigned int)v35 ^ (*(_QWORD *)(v8 - 8) ^ v35) & 0xFFFFFFFFFFFFFFE0uLL;
            goto LABEL_11;
          }
          v21 = KeGetCurrentThread()->ApcState.Process;
          if ( v21[1].IdealProcessorAssignmentBlock )
          {
            if ( MiLocateCloneAddress((__int64)v21, *(_QWORD *)(v6 + 8) | 0x8000000000000000uLL) )
              v20 = MmMakeProtectNotWriteCopy[v20];
          }
          v19 = v20;
        }
        v12 = (unsigned int)v19 ^ (*(_QWORD *)(v8 - 8) ^ v19) & 0xFFFFFFFFFFFFFFE0uLL;
      }
      else
      {
        *(_QWORD *)(v8 - 8) &= 0xFFFFFFFFFFFFFF1FuLL;
        v11 = (unsigned int)(*(_QWORD *)(v6 + 16) >> 5);
        v12 = v11 ^ (*(_QWORD *)(v8 - 8) ^ (unsigned int)v11) & 0xFFFFFFFFFFFFFFE0uLL;
      }
LABEL_11:
      *(_QWORD *)(v8 - 8) = v12;
      return 0LL;
    }
  }
  else
  {
    if ( *(__int64 *)(v6 + 40) >= 0 )
      return 0LL;
    v36 = *(_QWORD *)(v3 + 16) + 1LL;
    *(_QWORD *)(v3 + 16) = v36;
    if ( v36 < *(_QWORD *)(v3 + 24) )
    {
      v37 = 32 * v36 + *(_QWORD *)(v3 + 8);
      MiIdentifyPfnWrapper(48 * v5 - 0x220000000000LL, 0LL, (_QWORD *)(v37 - 32));
      *(_QWORD *)(v37 - 8) = v4;
      return 0LL;
    }
  }
  return 5LL;
}
