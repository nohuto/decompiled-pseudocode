/*
 * XREFs of StorPortNotificationVrfy @ 0x1401C24C0
 * Callers:
 *     <none>
 * Callees:
 *     StorPortNotification @ 0x14000DE70 (StorPortNotification.c)
 *     memset_0 @ 0x140138980 (memset_0.c)
 */

void __fastcall StorPortNotificationVrfy(
        int a1,
        va_list a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  _DWORD **v8; // r8
  int v10; // ecx
  int v11; // ecx
  __int64 v12; // rax
  size_t v13; // r8
  void *v14; // rcx
  va_list v15; // [rsp+68h] [rbp+10h]

  v15 = a2;
  v8 = (_DWORD **)*((_QWORD *)a2 - 2);
  v10 = 4096;
  if ( a1 > 4096 )
  {
    switch ( a1 )
    {
      case 4097:
        v10 = 4097;
        break;
      case 4098:
        StorPortNotification(4098, a2, a3, a4, a5, a6);
        return;
      case 4099:
        StorPortNotification(4099, a2, (unsigned int)a3, a4, a5);
        return;
      case 4100:
        v8 = (_DWORD **)a3;
        v11 = 4100;
        goto LABEL_21;
      case 4101:
        StorPortNotification(4101, a2, (unsigned int)a3, a4, a5, a6, a7, a8, 0LL);
        return;
      case 4102:
        v10 = 4102;
        break;
      case 4103:
        StorPortNotification(4103, a2, a3, a4, a5);
        return;
      default:
        goto LABEL_36;
    }
LABEL_44:
    StorPortNotification(v10, a2, a3, a4);
    return;
  }
  switch ( a1 )
  {
    case 4096:
      goto LABEL_44;
    case 0:
      v12 = 79LL;
      if ( **v8 != 1314275652 )
        v12 = 131LL;
      v13 = ((*v8)[v12] + 7) & 0xFFFFFFF8;
      if ( *(_BYTE *)(a3 + 2) == 40 )
        v14 = *(void **)(a3 + 104);
      else
        v14 = *(void **)(a3 + 56);
      memset_0(v14, 254, v13);
      a2 = v15;
      v8 = (_DWORD **)a3;
      v11 = 0;
      goto LABEL_21;
    case 3:
      v11 = 3;
      goto LABEL_21;
    case 6:
      v11 = 6;
      v8 = (_DWORD **)a3;
      goto LABEL_21;
    case 8:
      v8 = (_DWORD **)a3;
      if ( (_BYTE)a4 != 0xFF )
      {
        StorPortNotification(8, a2, a3);
        return;
      }
      v11 = 8;
      goto LABEL_21;
  }
  if ( a1 != 9 )
  {
    switch ( a1 )
    {
      case 12:
        v8 = (_DWORD **)a3;
        v11 = 12;
        goto LABEL_21;
      case 14:
        StorPortNotification(14, a2, (unsigned int)a3, a4);
        return;
      case 15:
        v8 = (_DWORD **)a3;
        v11 = 15;
LABEL_21:
        StorPortNotification(v11, a2, v8);
        return;
    }
LABEL_36:
    v11 = a1;
    goto LABEL_21;
  }
  if ( (_BYTE)a3 == 0xFF )
    StorPortNotification(9, a2);
  else
    StorPortNotification(9, a2, (unsigned __int8)a3, (unsigned __int8)a4, (unsigned __int8)a5);
}
