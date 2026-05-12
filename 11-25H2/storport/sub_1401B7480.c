/*
 * XREFs of sub_1401B7480 @ 0x1401B7480
 * Callers:
 *     <none>
 * Callees:
 *     StorPortNotification @ 0x14004C160 (StorPortNotification.c)
 *     memset_0 @ 0x14013C980 (memset_0.c)
 */

void __fastcall sub_1401B7480(
        int a1,
        _QWORD *a2,
        unsigned __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  unsigned __int64 v8; // r8
  int v9; // ebx
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  unsigned __int64 v16; // r8
  __int64 v17; // rax
  size_t v18; // r8
  void *v19; // rcx
  int v20; // ecx
  int v21; // ecx
  int v22; // ecx
  int v23; // ecx
  int v24; // ecx
  int v25; // ecx
  _QWORD *v26; // [rsp+78h] [rbp+10h]

  v26 = a2;
  v8 = *(a2 - 2);
  v9 = a1;
  if ( a1 <= 4096 )
  {
    if ( a1 != 4096 )
    {
      if ( !a1 )
      {
        v17 = 316LL;
        if ( **(_DWORD **)v8 != 1314275652 )
          v17 = 524LL;
        v18 = (*(_DWORD *)(v17 + *(_QWORD *)v8) + 7) & 0xFFFFFFF8;
        if ( *(_BYTE *)(a3 + 2) == 40 )
          v19 = *(void **)(a3 + 104);
        else
          v19 = *(void **)(a3 + 56);
        memset_0(v19, 254, v18);
        a2 = v26;
        v8 = a3;
        goto LABEL_27;
      }
      v10 = a1 - 3;
      if ( !v10 )
        goto LABEL_27;
      v11 = v10 - 3;
      if ( v11 )
      {
        v12 = v11 - 2;
        if ( v12 )
        {
          v13 = v12 - 1;
          if ( !v13 )
          {
            v8 = (unsigned __int8)a3;
            if ( (_BYTE)a3 != 0xFF )
            {
              StorPortNotification(v9, a2, (unsigned __int8)a3, (unsigned __int8)a4, (unsigned __int8)a5);
              return;
            }
            goto LABEL_27;
          }
          v14 = v13 - 3;
          if ( !v14 )
            goto LABEL_11;
          v15 = v14 - 2;
          if ( !v15 )
          {
            StorPortNotification(v9, a2, (unsigned int)a3, a4);
            return;
          }
          if ( v15 == 1 )
            goto LABEL_11;
LABEL_27:
          StorPortNotification(v9, a2, v8);
          return;
        }
        v16 = a3;
        a4 = (unsigned __int8)a4;
        if ( (_BYTE)a4 != 0xFF )
        {
          StorPortNotification(v9, a2, a3, (unsigned __int8)a4, (unsigned __int8)a5, (unsigned __int8)a6);
          return;
        }
      }
      else
      {
        a4 = (unsigned int)a4;
        v16 = a3;
      }
      StorPortNotification(v9, a2, v16, a4);
      return;
    }
    goto LABEL_40;
  }
  v20 = a1 - 4097;
  if ( !v20 )
    goto LABEL_39;
  v21 = v20 - 1;
  if ( !v21 )
  {
    StorPortNotification(v9, a2, a3, a4, a5, a6);
    return;
  }
  v22 = v21 - 1;
  if ( !v22 )
  {
    StorPortNotification(v9, a2, (unsigned int)a3, a4, a5);
    return;
  }
  v23 = v22 - 1;
  if ( !v23 )
  {
LABEL_11:
    v8 = a3;
    goto LABEL_27;
  }
  v24 = v23 - 1;
  if ( !v24 )
  {
    StorPortNotification(v9, a2, (unsigned int)a3, a4, a5, a6, a7, a8);
    return;
  }
  v25 = v24 - 1;
  if ( !v25 )
  {
LABEL_39:
    a1 = v9;
LABEL_40:
    StorPortNotification(a1, a2, a3, a4);
    return;
  }
  if ( v25 != 1 )
    goto LABEL_27;
  StorPortNotification(v9, a2, a3, a4, a5);
}
