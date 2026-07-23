/*
 * XREFs of PnpReleaseBootResourcesForFilteredRequirements @ 0x1405DD704
 * Callers:
 *     IopReleaseFilteredBootResources @ 0x1407A9034 (IopReleaseFilteredBootResources.c)
 * Callees:
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     IopFreeReqList @ 0x1407A57BC (IopFreeReqList.c)
 *     PnpCmResourcesToIoResources @ 0x140AA0FBC (PnpCmResourcesToIoResources.c)
 *     IopResourceRequirementsListToReqList @ 0x140B09240 (IopResourceRequirementsListToReqList.c)
 *     IopCallArbiter @ 0x140B35EE4 (IopCallArbiter.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PnpReleaseBootResourcesForFilteredRequirements(__int64 *a1)
{
  void *v2; // rdi
  __int64 v3; // rcx
  __int64 v4; // rbx
  __int64 v5; // rsi
  __int64 v6; // rdx
  int v7; // ebx
  __int64 v9; // rax
  __int64 v10; // r15
  __int64 v11; // rax
  __int64 v12; // rsi
  __int64 v13; // r13
  __int64 v14; // r14
  unsigned int v15; // r8d
  __int64 v16; // rdx
  __int64 v17; // rax
  _QWORD *v18; // rax
  int v19; // eax
  __int64 v20; // rcx
  __int64 *v21; // rax
  __int64 v22; // [rsp+38h] [rbp-59h] BYREF
  __int64 *v23; // [rsp+40h] [rbp-51h]
  __int64 v24; // [rsp+58h] [rbp-39h]
  __int64 v25; // [rsp+60h] [rbp-31h]
  __int64 v26; // [rsp+68h] [rbp-29h]
  __int64 v27; // [rsp+80h] [rbp-11h]
  __int64 v28; // [rsp+98h] [rbp+7h] BYREF
  int v29; // [rsp+A4h] [rbp+13h]
  __int64 v30; // [rsp+B0h] [rbp+1Fh]
  PVOID P[4]; // [rsp+B8h] [rbp+27h] BYREF

  memset_0(&v22, 0, 0x60uLL);
  v2 = 0LL;
  memset_0(&v28, 0, 0x40uLL);
  v4 = *a1;
  if ( *a1 )
    v5 = *(_QWORD *)(*(_QWORD *)(v4 + 312) + 40LL);
  else
    v5 = 0LL;
  v6 = *(_QWORD *)(v5 + 544);
  if ( v6 && (v9 = PnpCmResourcesToIoResources(v3, v6, 1LL), (v2 = (void *)v9) != 0LL) )
  {
    v29 = 4;
    v30 = v9;
    v28 = v4;
    v7 = IopResourceRequirementsListToReqList(&v28, P);
    if ( v7 >= 0 )
    {
      if ( !P[0] )
      {
LABEL_9:
        ExFreePoolWithTag(v2, 0);
        return (unsigned int)v7;
      }
      v10 = *((_QWORD *)P[0] + 5);
      v7 = 0;
      v11 = *(_QWORD *)(v5 + 32);
      v12 = 0LL;
      v13 = **(_QWORD **)(a1[4] + 16);
      v24 = v11;
      v25 = 4LL;
      v26 = 0LL;
      v27 = 0LL;
      while ( (unsigned int)v12 < *(_DWORD *)(v10 + 20) )
      {
        v14 = *(_QWORD *)(*(_QWORD *)(v10 + 8 * v12 + 24) + 288LL);
        if ( v14 )
        {
          v15 = *(_DWORD *)(v13 + 20);
          v16 = 0LL;
          if ( v15 )
          {
            while ( 1 )
            {
              v17 = *(_QWORD *)(*(_QWORD *)(v13 + 8 * v16 + 24) + 288LL);
              if ( v17 )
              {
                if ( *(_BYTE *)(v14 + 16) == *(_BYTE *)(v17 + 16) )
                  break;
              }
              v16 = (unsigned int)(v16 + 1);
              if ( (unsigned int)v16 >= v15 )
                goto LABEL_21;
            }
          }
          else
          {
LABEL_21:
            if ( (_DWORD)v16 == v15 )
            {
              v23 = &v22;
              v22 = (__int64)&v22;
              v18 = *(_QWORD **)(v14 + 48);
              if ( *v18 != v14 + 40 )
                goto LABEL_28;
              v23 = *(__int64 **)(v14 + 48);
              v22 = v14 + 40;
              *v18 = &v22;
              *(_QWORD *)(v14 + 48) = &v22;
              v19 = IopCallArbiter(v14, 0LL);
              v20 = v22;
              v7 = v19;
              v21 = v23;
              if ( *(__int64 **)(v22 + 8) != &v22 || (__int64 *)*v23 != &v22 )
LABEL_28:
                __fastfail(3u);
              *v23 = v22;
              *(_QWORD *)(v20 + 8) = v21;
              if ( v7 < 0 )
                break;
              v7 = IopCallArbiter(v14, 2LL);
              if ( v7 < 0 )
                break;
            }
          }
        }
        v12 = (unsigned int)(v12 + 1);
      }
    }
  }
  else
  {
    v7 = -1073741823;
  }
  if ( P[0] )
    IopFreeReqList(P[0]);
  if ( v2 )
    goto LABEL_9;
  return (unsigned int)v7;
}
