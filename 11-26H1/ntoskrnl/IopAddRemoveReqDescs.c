/*
 * XREFs of IopAddRemoveReqDescs @ 0x140B41F34
 * Callers:
 *     IopSelectNextConfiguration @ 0x1407A5AEC (IopSelectNextConfiguration.c)
 *     PnpFindBestConfigurationWorker @ 0x1407A60BC (PnpFindBestConfigurationWorker.c)
 *     PnpSelectFirstConfiguration @ 0x1407A6258 (PnpSelectFirstConfiguration.c)
 *     IopBootAllocation @ 0x1407A8CD8 (IopBootAllocation.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall IopAddRemoveReqDescs(__int64 a1, unsigned int a2, _QWORD *a3, char a4)
{
  __int64 v4; // rdi
  __int64 v9; // rsi
  __int64 v10; // rbx
  char v11; // al
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 *v14; // rax
  __int64 **v15; // rdx
  _QWORD *v16; // rdx
  _QWORD *i; // rcx
  __int64 *v18; // rdx
  __int64 **v19; // rcx
  _QWORD *v20; // rax
  __int64 v21; // rdx
  _QWORD *v22; // rcx

  if ( a2 )
  {
    v4 = 0LL;
    do
    {
      v9 = *(_QWORD *)(a1 + 8 * v4);
      if ( *(_BYTE *)(v9 + 8) )
      {
        v10 = *(_QWORD *)(v9 + 288);
        v11 = *(_BYTE *)(v10 + 104);
        if ( (v11 & 1) != 0 )
        {
          v12 = *(_QWORD *)(v10 + 24);
          *(_BYTE *)(v10 + 104) = v11 & 0xFE;
          guard_dispatch_icall_no_overrides(*(_QWORD *)(v12 + 8), 3LL);
        }
        *(_BYTE *)(v10 + 105) = 1;
        v13 = *(_QWORD *)(v9 + 32);
        v14 = (__int64 *)(v13 + 40);
        if ( a4 )
        {
          *(_QWORD *)(v13 + 48) = v14;
          *v14 = (__int64)v14;
          v15 = *(__int64 ***)(v10 + 48);
          if ( *v15 != (__int64 *)(v10 + 40) )
            goto LABEL_21;
          *(_QWORD *)(v13 + 48) = v15;
          *v14 = v10 + 40;
          *v15 = v14;
          v16 = (_QWORD *)(v10 + 88);
          *(_QWORD *)(v10 + 48) = v14;
          if ( (_QWORD *)*v16 == v16 )
          {
            for ( i = (_QWORD *)*a3; i != a3; i = (_QWORD *)*i )
            {
              if ( *(_DWORD *)(*(i - 7) + 152LL) >= *(_DWORD *)(*(_QWORD *)(v10 + 32) + 152LL) )
                break;
            }
            *v16 = i;
            *(_QWORD *)(v10 + 96) = i[1];
            *(_QWORD *)i[1] = v16;
            i[1] = v16;
          }
        }
        else
        {
          v18 = (__int64 *)*v14;
          if ( *(__int64 **)(*v14 + 8) != v14 || (v19 = *(__int64 ***)(v13 + 48), *v19 != v14) )
LABEL_21:
            __fastfail(3u);
          *v19 = v18;
          v18[1] = (__int64)v19;
          *(_QWORD *)(v13 + 48) = v14;
          *v14 = (__int64)v14;
          if ( *(_QWORD *)(v10 + 40) == v10 + 40 )
          {
            v20 = (_QWORD *)(v10 + 88);
            v21 = *(_QWORD *)(v10 + 88);
            if ( *(_QWORD *)(v21 + 8) != v10 + 88 )
              goto LABEL_21;
            v22 = *(_QWORD **)(v10 + 96);
            if ( (_QWORD *)*v22 != v20 )
              goto LABEL_21;
            *v22 = v21;
            *(_QWORD *)(v21 + 8) = v22;
            *(_QWORD *)(v10 + 96) = v20;
            *v20 = v20;
          }
        }
      }
      v4 = (unsigned int)(v4 + 1);
    }
    while ( (unsigned int)v4 < a2 );
  }
}
