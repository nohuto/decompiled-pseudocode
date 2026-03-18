/*
 * XREFs of ?ReleaseHandleTableEntries@CResourceTable@@QEAA_NPEAVCComposition@@PEAVCChannelContext@@@Z @ 0x180163210
 * Callers:
 *     ?CloseChannel@CComposition@@IEAAJI@Z @ 0x18016303C (-CloseChannel@CComposition@@IEAAJI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     memset_0 @ 0x1802215C0 (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CResourceTable::ReleaseHandleTableEntries(
        CResourceTable *this,
        struct CComposition *a2,
        struct CChannelContext *a3,
        __int64 a4)
{
  unsigned int v4; // eax
  struct CChannelContext *v5; // rbp
  unsigned int i; // ebx
  __int64 v8; // rdx
  __int64 v10; // rcx
  __int64 v11; // rsi
  int *v12; // r14
  int v13; // r9d
  _DWORD *v14; // r8
  int v15; // edx

  v4 = *((_DWORD *)this + 7);
  LOBYTE(a4) = 0;
  v5 = a3;
  for ( i = 0; i < v4; ++i )
  {
    if ( i )
    {
      if ( i < v4 )
      {
        v8 = *((_QWORD *)this + 5) + *((_DWORD *)this + 6) * i;
        if ( *(_DWORD *)v8 )
        {
          if ( v8 )
          {
            v10 = *(_QWORD *)(v8 + 8);
            if ( v10 )
            {
              LOBYTE(a3) = 1;
              (*(void (__fastcall **)(__int64, struct CChannelContext *, struct CChannelContext *, __int64))(*(_QWORD *)v10 + 168LL))(
                v10,
                v5,
                a3,
                a4);
              v11 = *((_QWORD *)v5 + 6);
              if ( i < *(_DWORD *)(v11 + 28)
                && (v12 = (int *)(*(_QWORD *)(v11 + 40) + *(_DWORD *)(v11 + 24) * i), (v13 = *v12) != 0)
                && v12 )
              {
                if ( *((_QWORD *)v12 + 1) )
                {
                  v14 = *(_DWORD **)(v11 + 56);
                  if ( v13 == 164 )
                  {
LABEL_17:
                    --v14[28];
                    v15 = v13 - 2;
                    if ( v13 == 164 )
                    {
LABEL_22:
                      --dword_1803DE910;
                    }
                    else
                    {
LABEL_24:
                      switch ( v15 )
                      {
                        case 0:
                        case 42:
                        case 74:
                        case 89:
                        case 135:
                          --dword_1803DE918;
                          break;
                        case 29:
                          goto LABEL_29;
                        case 33:
                        case 136:
                          --dword_1803DE908;
                          break;
                        case 68:
                          --dword_1803DE914;
                          break;
                        case 69:
                        case 137:
                        case 154:
                          goto LABEL_22;
                        default:
                          --dword_1803DE90C;
                          break;
                      }
                    }
                  }
                  else
                  {
                    v15 = v13 - 2;
                    switch ( v13 )
                    {
                      case 2:
                      case 44:
                      case 76:
                      case 91:
                      case 137:
                        --v14[30];
                        goto LABEL_24;
                      case 31:
                        --v14[31];
LABEL_29:
                        --dword_1803DE91C;
                        break;
                      case 35:
                      case 138:
                        --v14[26];
                        goto LABEL_24;
                      case 70:
                        --v14[29];
                        --dword_1803DE914;
                        break;
                      case 71:
                      case 139:
                      case 156:
                        goto LABEL_17;
                      default:
                        --v14[27];
                        goto LABEL_24;
                    }
                  }
                  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)v12 + 1) + 16LL))(*((_QWORD *)v12 + 1));
                  *((_QWORD *)v12 + 1) = 0LL;
                }
                memset_0((void *)(*(_QWORD *)(v11 + 40) + i * *(_DWORD *)(v11 + 24)), 0, *(unsigned int *)(v11 + 24));
                LOBYTE(a4) = 1;
              }
              else
              {
                MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024890, 0x8D6u, 0LL);
                LOBYTE(a4) = 1;
              }
            }
          }
        }
      }
    }
    v4 = *((_DWORD *)this + 7);
  }
  return (unsigned __int8)a4;
}
