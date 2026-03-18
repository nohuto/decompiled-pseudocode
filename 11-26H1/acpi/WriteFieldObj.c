/*
 * XREFs of WriteFieldObj @ 0x1400038F0
 * Callers:
 *     <none>
 * Callees:
 *     PushAccFieldObj @ 0x1400010C0 (PushAccFieldObj.c)
 *     AccessFieldData @ 0x1400047D0 (AccessFieldData.c)
 *     HeapFree @ 0x14000C1E0 (HeapFree.c)
 *     _guard_dispatch_icall @ 0x140072370 (_guard_dispatch_icall.c)
 *     memmove @ 0x140072440 (memmove.c)
 */

__int64 __fastcall WriteFieldObj(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v3; // edi
  int v6; // r9d
  _DWORD *v7; // rdx
  int v8; // eax
  _DWORD *v9; // r14
  int v10; // eax
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rax
  __int64 v13; // rdx
  __int64 result; // rax
  int v15; // eax
  int v16; // ecx
  int v17; // ecx
  unsigned int v18; // eax
  int v19; // ecx
  int v20; // ecx
  __int64 v21; // rax
  __int64 v22; // rax
  unsigned __int64 v23; // rdi
  __int64 v24; // rsi
  size_t v25; // r15
  int (__fastcall *v26)(_QWORD, unsigned __int64, __int64 *, _QWORD, int *); // rax
  __int64 v27; // rax
  unsigned __int64 v28; // rax
  size_t v29; // r15
  size_t v30; // r12
  int (__fastcall *v31)(_QWORD, size_t, __int64 *, _QWORD, int *); // rax
  __int64 v32; // rcx
  __int64 v33; // rax
  int v34; // [rsp+80h] [rbp+18h] BYREF
  __int64 v35; // [rsp+88h] [rbp+20h] BYREF

  v3 = a3;
  if ( a3 )
    goto LABEL_35;
  v6 = *(_DWORD *)(a2 + 16);
  v7 = (_DWORD *)(a2 + 16);
  v8 = v6 & 0xF;
  if ( v8 == 1 )
    goto LABEL_15;
  v9 = v7;
  if ( (v6 & 0xF) == 0 )
    goto LABEL_12;
  v10 = v8 - 2;
  if ( !v10 )
  {
    while ( 1 )
    {
      v15 = *(_DWORD *)(a2 + 56);
      v7 = v9;
      *(_DWORD *)(a2 + 96) += v15;
      v16 = *(_DWORD *)(a2 + 100);
      ++*(_DWORD *)(a2 + 80);
      *(_DWORD *)(a2 + 100) = 0;
      v17 = v16 - 8 * v15;
      v18 = *(_DWORD *)(a2 + 80);
      *(_DWORD *)(a2 + 104) += v17;
      v19 = *v9;
      if ( v18 >= *(_DWORD *)(a2 + 60) )
      {
        *v9 = v19 + 1;
        goto LABEL_35;
      }
      *v9 = v19 - 2;
LABEL_12:
      v20 = *v7;
      if ( *(_DWORD *)(a2 + 80) >= *(_DWORD *)(a2 + 60) )
      {
        *v7 = v20 + 3;
        goto LABEL_35;
      }
      v21 = *(_QWORD *)(a2 + 32);
      v6 = v20 + 1;
      *v7 = v20 + 1;
      if ( *(_WORD *)(v21 + 2) == 5 )
      {
        v22 = **(_QWORD **)(v21 + 32);
        if ( *(_WORD *)(v22 + 66) == 132 )
          return PushAccFieldObj(
                   a1,
                   (__int64)WriteFieldObj,
                   **(_QWORD **)(v22 + 96) + 64LL,
                   (_DWORD *)(*(_QWORD *)(**(_QWORD **)(v22 + 96) + 96LL) + 8LL),
                   a2 + 96,
                   4u);
      }
LABEL_15:
      v23 = *(_QWORD *)(a2 + 40);
      v9 = v7;
      v24 = *(_QWORD *)(a2 + 64);
      *v7 = v6 + 1;
      if ( v23 >= *(_QWORD *)(a2 + 48) )
      {
        v28 = 0LL;
      }
      else
      {
        v25 = *(unsigned int *)(a2 + 56);
        v34 = 0;
        v35 = 0LL;
        if ( (unsigned int)v25 > 8 )
        {
          v28 = -1LL;
        }
        else
        {
          if ( BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink)
            && (v26 = *(int (__fastcall **)(_QWORD, unsigned __int64, __int64 *, _QWORD, int *))(PmHalDispatchTable + 144)) != 0LL
            && v26(0LL, v23, &v35, (unsigned int)v25, &v34) >= 0 )
          {
            v27 = v35;
          }
          else if ( v23 % v25 )
          {
            memmove(&v35, (const void *)v23, v25);
            v27 = v35;
          }
          else
          {
            switch ( (_DWORD)v25 )
            {
              case 1:
                v27 = *(unsigned __int8 *)v23;
                break;
              case 4:
                v27 = *(unsigned int *)v23;
                break;
              case 2:
                v27 = *(unsigned __int16 *)v23;
                break;
              case 8:
                v27 = *(_QWORD *)v23;
                break;
              default:
                v27 = -1LL;
                break;
            }
          }
          v28 = v24 & v27;
          v24 = *(_QWORD *)(a2 + 64);
        }
      }
      if ( !*(_DWORD *)(a2 + 80) )
      {
        v11 = 0LL;
        goto LABEL_8;
      }
      v29 = *(unsigned int *)(a2 + 56);
      v30 = v29 + *(_QWORD *)(a2 + 40);
      v11 = v28 >> *(_DWORD *)(a2 + 72);
      *(_QWORD *)(a2 + 88) = v11;
      *(_QWORD *)(a2 + 40) = v30;
      if ( v30 >= *(_QWORD *)(a2 + 48) )
      {
        v28 = 0LL;
      }
      else
      {
        v34 = 0;
        v35 = 0LL;
        if ( (unsigned int)v29 > 8 )
        {
          v28 = -1LL;
        }
        else if ( BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink)
               && (v31 = *(int (__fastcall **)(_QWORD, size_t, __int64 *, _QWORD, int *))(PmHalDispatchTable + 144)) != 0LL
               && v31(0LL, v30, &v35, (unsigned int)v29, &v34) >= 0 )
        {
          v11 = *(_QWORD *)(a2 + 88);
          v28 = v35 & v24;
          v24 = *(_QWORD *)(a2 + 64);
        }
        else if ( v30 % v29 )
        {
          memmove(&v35, (const void *)v30, v29);
          v11 = *(_QWORD *)(a2 + 88);
          v28 = v35 & v24;
          v24 = *(_QWORD *)(a2 + 64);
        }
        else
        {
          switch ( (_DWORD)v29 )
          {
            case 1:
              v32 = *(unsigned __int8 *)v30;
LABEL_33:
              v11 = *(_QWORD *)(a2 + 88);
              v33 = v24;
              v24 = *(_QWORD *)(a2 + 64);
              v28 = v32 & v33;
              break;
            case 4:
              v11 = *(_QWORD *)(a2 + 88);
              v28 = *(_DWORD *)v30 & (unsigned int)v24;
              v24 = *(_QWORD *)(a2 + 64);
              break;
            case 2:
              v11 = *(_QWORD *)(a2 + 88);
              v28 = (unsigned __int16)(*(_WORD *)v30 & v24);
              v24 = *(_QWORD *)(a2 + 64);
              break;
            case 8:
              v11 = *(_QWORD *)(a2 + 88);
              v28 = *(_QWORD *)v30 & v24;
              v24 = *(_QWORD *)(a2 + 64);
              break;
            default:
              v32 = -1LL;
              goto LABEL_33;
          }
        }
      }
LABEL_8:
      v12 = v11 | v24 & (v28 << *(_DWORD *)(a2 + 76));
      v13 = *(_QWORD *)(a2 + 32);
      *(_QWORD *)(a2 + 88) = v12;
      result = AccessFieldData(a1, v13, (int)a2 + 96, (int)a2 + 88, 0);
      v3 = result;
      if ( (_DWORD)result == 32772 || a2 != *(_QWORD *)(a1 + 416) )
        return result;
    }
  }
  if ( v10 == 1 )
  {
LABEL_35:
    *(_QWORD *)(a1 + 416) = *(_QWORD *)(*(_QWORD *)(a1 + 416) + 8LL);
    HeapFree();
  }
  return v3;
}
