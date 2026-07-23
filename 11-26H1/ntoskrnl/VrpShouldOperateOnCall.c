/*
 * XREFs of VrpShouldOperateOnCall @ 0x14093A150
 * Callers:
 *     VrpRegistryCallback @ 0x140935A40 (VrpRegistryCallback.c)
 * Callees:
 *     VRegEnabledInJob @ 0x14093A35C (VRegEnabledInJob.c)
 */

__int64 __fastcall VrpShouldOperateOnCall(int a1, _QWORD *a2, _QWORD *a3, _QWORD *a4)
{
  __int64 v7; // rcx
  __int64 v8; // rax
  unsigned int v9; // edx
  _QWORD *v11; // rcx
  _QWORD *i; // rax
  __int64 v13; // rdx
  _QWORD v14[3]; // [rsp+20h] [rbp-18h] BYREF

  v14[0] = 0LL;
  switch ( a1 )
  {
    case 48:
LABEL_2:
      v7 = a2[4];
LABEL_3:
      v8 = a2[5];
      break;
    case 33:
LABEL_12:
      v8 = *(_QWORD *)(*a2 + 40LL);
      v7 = *(_QWORD *)(*a2 + 32LL);
      break;
    case 26:
LABEL_14:
      v7 = 0LL;
      v8 = *(_QWORD *)(*a2 + 88LL);
      break;
    default:
      switch ( a1 )
      {
        case 0:
        case 14:
        case 30:
          v8 = a2[2];
          v7 = 0LL;
          goto LABEL_4;
        case 1:
        case 5:
        case 6:
        case 7:
          v8 = a2[6];
          v7 = 0LL;
          goto LABEL_4;
        case 2:
        case 4:
        case 34:
          v8 = a2[3];
          v7 = 0LL;
          goto LABEL_4;
        case 3:
        case 36:
        case 47:
        case 49:
          v7 = 0LL;
          goto LABEL_3;
        case 8:
        case 9:
          v8 = a2[7];
          v7 = 0LL;
          goto LABEL_4;
        case 11:
        case 13:
        case 15:
        case 16:
        case 17:
        case 18:
        case 19:
        case 20:
        case 21:
        case 22:
        case 23:
        case 24:
        case 25:
        case 31:
        case 35:
        case 37:
        case 39:
        case 42:
        case 44:
        case 46:
        case 50:
          goto LABEL_2;
        case 27:
        case 29:
          goto LABEL_12;
        case 28:
          goto LABEL_14;
        case 32:
          v7 = 0LL;
          v8 = *(_QWORD *)(*a2 + 72LL);
          goto LABEL_4;
        case 38:
        case 41:
        case 43:
        case 45:
          v8 = a2[4];
          v7 = 0LL;
          goto LABEL_4;
        case 40:
          v8 = a2[1];
          v7 = 0LL;
          goto LABEL_4;
        default:
          goto LABEL_6;
      }
  }
LABEL_4:
  if ( v8 )
  {
    v9 = 1;
    *a4 = *(_QWORD *)(v8 + 40);
    goto LABEL_10;
  }
  if ( v7 )
  {
    v9 = 1;
    *a4 = *(_QWORD *)(v7 + 8);
  }
  else
  {
LABEL_6:
    if ( a1 == 32 )
    {
      v9 = VRegEnabledInJob(v14);
      if ( v9 )
      {
        *a4 = v14[0];
        goto LABEL_9;
      }
    }
    else if ( ((a1 - 27) & 0xFFFFFFFD) == 0 )
    {
      v11 = *(_QWORD **)(a2[1] + 16LL);
      for ( i = (_QWORD *)*v11; i != v11; i = (_QWORD *)*i )
      {
        v13 = i[2] - VRP_ORIGINAL_KEY_NAME_PARAMETER_GUID;
        if ( !v13 )
          v13 = i[3] - *((_QWORD *)&VRP_ORIGINAL_KEY_NAME_PARAMETER_GUID + 1);
        if ( !v13 )
        {
          v9 = 1;
          *a4 = i[6];
          goto LABEL_9;
        }
      }
    }
    v9 = 0;
    *a4 = 0LL;
  }
LABEL_9:
  v8 = 0LL;
LABEL_10:
  *a3 = v8;
  return v9;
}
