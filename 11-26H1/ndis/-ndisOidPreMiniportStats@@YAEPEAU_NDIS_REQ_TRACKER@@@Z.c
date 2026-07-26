/*
 * XREFs of ?ndisOidPreMiniportStats@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x14004ACC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisOidPreMiniportStats(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // rbp
  unsigned __int8 v2; // bl
  int v4; // eax
  int v5; // edi
  __int64 v6; // r9
  __int64 v7; // r9
  __int64 v8; // rax
  void *Pool2; // rsi
  _DWORD *v10; // rax
  __int64 result; // rax
  int v12; // ebx
  __int64 v13; // r10
  __int64 v14; // r11
  __int64 v15; // r8
  __int64 v16; // rsi
  __int64 v17; // rbx
  unsigned int v18; // ecx
  __int64 v19; // rax
  int v20; // ecx

  v1 = *((_QWORD *)a1 + 4);
  v2 = 0;
  v4 = *(_DWORD *)(v1 + 4);
  if ( !v4 || v4 == 2 )
  {
    v5 = *(_DWORD *)(v1 + 32);
    if ( *((_QWORD *)a1 + 2) || (v6 = *(_QWORD *)a1, *(_BYTE *)(*(_QWORD *)a1 + 32LL) >= 6u) )
    {
      if ( *(_DWORD *)(v1 + 48) < 4u )
      {
        *(_DWORD *)(v1 + 56) = 8;
        v2 = 1;
        *((_DWORD *)a1 + 10) = -1073676268;
      }
      else
      {
        Pool2 = (void *)ExAllocatePool2(64LL, 152LL, 1903313998LL);
        if ( Pool2 )
        {
          v10 = (_DWORD *)ExAllocatePool2(64LL, 64LL, 1903313998LL);
          *(_QWORD *)(v1 + 144) = v10;
          if ( v10 )
          {
            *v10 = v5;
            v2 = 0;
            *(_QWORD *)(*(_QWORD *)(v1 + 144) + 8LL) = *(_QWORD *)(v1 + 40);
            *(_DWORD *)(*(_QWORD *)(v1 + 144) + 16LL) = *(_DWORD *)(v1 + 48);
            *(_DWORD *)(v1 + 32) = 131334;
            *(_QWORD *)(v1 + 40) = Pool2;
            *(_DWORD *)(v1 + 48) = 152;
          }
          else
          {
            *((_DWORD *)a1 + 10) = -1073741670;
            v2 = 1;
            ExFreePoolWithTag(Pool2, 0);
          }
        }
        else
        {
LABEL_39:
          *((_DWORD *)a1 + 10) = -1073741670;
          return 1;
        }
      }
    }
    else if ( v6 )
    {
      v7 = *(_QWORD *)(v6 + 3152);
      v8 = 0LL;
      if ( v5 == 131591 )
      {
        v14 = -1LL;
        v12 = 8;
        v13 = -1LL;
LABEL_14:
        if ( ndisMaxNumberOfProcessors )
        {
          v15 = 0LL;
          v16 = v7 + v12;
          v17 = ndisMaxNumberOfProcessors;
          do
          {
            v8 += *(_QWORD *)(v15 + v16);
            if ( v14 >= 0 )
              v8 += *(_QWORD *)(v15 + v14 + v7);
            if ( v13 >= 0 )
              v8 += *(_QWORD *)(v15 + v13 + v7);
            v15 += 112LL;
            --v17;
          }
          while ( v17 );
        }
      }
      else
      {
        switch ( v5 )
        {
          case 131585:
            v14 = -1LL;
            v12 = 88;
            v13 = -1LL;
            goto LABEL_14;
          case 131586:
            v14 = -1LL;
            v12 = 64;
            v13 = -1LL;
            goto LABEL_14;
          case 131587:
            v14 = -1LL;
            v12 = 96;
            v13 = -1LL;
            goto LABEL_14;
          case 131588:
            v14 = -1LL;
            v12 = 72;
            v13 = -1LL;
            goto LABEL_14;
          case 131589:
            v14 = -1LL;
            v12 = 104;
            v13 = -1LL;
            goto LABEL_14;
          case 131590:
            v14 = -1LL;
            v12 = 80;
            v13 = -1LL;
            goto LABEL_14;
          case 131592:
            v14 = -1LL;
            v12 = 32;
            v13 = -1LL;
            goto LABEL_14;
          case 131593:
            v14 = -1LL;
            v12 = 24;
            v13 = -1LL;
            goto LABEL_14;
          case 131594:
            v14 = -1LL;
            v12 = 40;
            v13 = -1LL;
            goto LABEL_14;
          case 131595:
            v14 = -1LL;
            v12 = 16;
            v13 = -1LL;
            goto LABEL_14;
          case 131596:
            v14 = -1LL;
            v12 = 48;
            v13 = -1LL;
            goto LABEL_14;
          case 131609:
            v12 = 8;
            v13 = 24LL;
            v14 = 16LL;
            goto LABEL_14;
          case 131610:
            v12 = 88;
            v13 = 96LL;
            v14 = 104LL;
            goto LABEL_14;
          default:
            if ( v5 != 131611 )
              return v2;
            v19 = *(_QWORD *)(v1 + 144);
            if ( !v19 )
              goto LABEL_39;
            v20 = *(_DWORD *)(v19 + 56);
            if ( v20 )
            {
              *((_DWORD *)a1 + 10) = v20;
              return 1;
            }
            v8 = *(_QWORD *)(v19 + 40);
            break;
        }
      }
      v18 = *(_DWORD *)(v1 + 48);
      if ( v18 < 8 )
      {
        if ( v18 == 4 )
        {
          **(_DWORD **)(v1 + 40) = v8;
          *(_DWORD *)(v1 + 52) = 4;
          *((_DWORD *)a1 + 10) = 0;
        }
        else
        {
          *(_DWORD *)(v1 + 56) = 8;
          *((_DWORD *)a1 + 10) = -1073676268;
        }
      }
      else
      {
        **(_QWORD **)(v1 + 40) = v8;
        *(_DWORD *)(v1 + 52) = 8;
        *((_DWORD *)a1 + 10) = 0;
      }
      return 1;
    }
    return v2;
  }
  else
  {
    result = 1LL;
    *((_DWORD *)a1 + 10) = -1073741637;
  }
  return result;
}
