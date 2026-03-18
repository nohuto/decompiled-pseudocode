/*
 * XREFs of TransformMessageBetweenCoordinateSpaces @ 0x140142CF0
 * Callers:
 *     ?_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x140020958 (-_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@.c)
 *     xxxInterSendMsgEx @ 0x14012BE00 (xxxInterSendMsgEx.c)
 * Callees:
 *     IsPointerParentNotify @ 0x140137050 (IsPointerParentNotify.c)
 *     ?DoesMsgNeedDPITransform@@YA_NI_K_J@Z @ 0x1401432E4 (-DoesMsgNeedDPITransform@@YA_NI_K_J@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

__int64 __fastcall TransformMessageBetweenCoordinateSpaces(
        __int64 a1,
        unsigned __int64 a2,
        __int64 *a3,
        __int16 *a4,
        __int64 a5,
        __int64 a6)
{
  unsigned int v6; // r12d
  unsigned int v9; // r14d
  unsigned int v10; // ebx
  unsigned int v11; // eax
  __int64 v13; // rbx
  int v14; // edx
  int v15; // r14d
  __int64 v16; // rcx
  int v17; // eax
  int v18; // eax
  __int64 v19; // rcx
  int v20; // eax
  __int64 v21; // rcx
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  int v23; // r12d
  int v24; // r12d
  int v25; // eax
  __int64 v26; // rbx
  unsigned int v27; // eax
  __int64 v28; // rbx
  __int64 v29; // r14
  __int64 v30; // [rsp+20h] [rbp-50h] BYREF
  __int64 v31; // [rsp+28h] [rbp-48h] BYREF
  unsigned __int64 v32; // [rsp+30h] [rbp-40h] BYREF
  __int64 v33; // [rsp+38h] [rbp-38h] BYREF
  __int128 v34; // [rsp+40h] [rbp-30h] BYREF
  __int128 v35; // [rsp+50h] [rbp-20h] BYREF

  v6 = 0;
  LODWORD(v32) = a2;
  v9 = a1;
  if ( a5 )
  {
    v10 = *(_DWORD *)(*(_QWORD *)(a5 + 40) + 288LL);
  }
  else
  {
    CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(a1);
    a2 = (unsigned int)v32;
    v10 = CurrentThreadDpiAwarenessContext;
  }
  if ( a6 )
  {
    v11 = *(_DWORD *)(*(_QWORD *)(a6 + 40) + 288LL);
  }
  else
  {
    v11 = W32GetCurrentThreadDpiAwarenessContext(a1);
    a2 = (unsigned int)v32;
  }
  if ( (((unsigned __int16)(v10 >> 8) ^ (unsigned __int16)(v11 >> 8)) & 0x1FF) == 0 )
    return 0LL;
  v13 = *(_QWORD *)a4;
  if ( !DoesMsgNeedDPITransform(v9, a2, *(_QWORD *)a4) )
    return 0LL;
  v30 = 0LL;
  v31 = 0LL;
  v35 = 0LL;
  v34 = 0LL;
  if ( v14 )
  {
    if ( v9 == 833 )
    {
LABEL_14:
      v6 = 1;
      goto LABEL_15;
    }
    if ( v9 <= 0x83 )
    {
      switch ( v9 )
      {
        case 0x83u:
          if ( *a3 )
          {
            v23 = TransformRectBetweenCoordinateSpaces(v13, v13, a5, a6);
            v24 = TransformRectBetweenCoordinateSpaces(v13 + 16, v13 + 16, a5, a6) | v23;
            v25 = TransformRectBetweenCoordinateSpaces(v13 + 32, v13 + 32, a5, a6);
            v26 = *(_QWORD *)(v13 + 48);
            *(_QWORD *)&v35 = *(_QWORD *)(v26 + 16);
            DWORD2(v35) = *(_DWORD *)(v26 + 24) + *(_DWORD *)(v26 + 16);
            HIDWORD(v35) = *(_DWORD *)(v26 + 28) + *(_DWORD *)(v26 + 20);
            v6 = TransformRectBetweenCoordinateSpaces(&v34, &v35, a5, a6) | v25 | v24;
            *(_QWORD *)(v26 + 16) = v34;
            *(_DWORD *)(v26 + 24) = DWORD2(v34) - v34;
            *(_DWORD *)(v26 + 28) = HIDWORD(v34) - DWORD1(v34);
          }
          else
          {
            v6 = TransformRectBetweenCoordinateSpaces(v13, v13, a5, a6);
          }
          v15 = 128;
          goto LABEL_20;
        case 0x46u:
        case 0x47u:
          *(_QWORD *)&v35 = *(_QWORD *)(v13 + 16);
          DWORD2(v35) = *(_DWORD *)(v13 + 24) + *(_DWORD *)(v13 + 16);
          HIDWORD(v35) = *(_DWORD *)(v13 + 20) + *(_DWORD *)(v13 + 28);
          v6 = TransformRectBetweenCoordinateSpaces(&v34, &v35, a5, a6);
          *(_QWORD *)(v13 + 16) = v34;
          *(_DWORD *)(v13 + 24) = DWORD2(v34) - v34;
          *(_DWORD *)(v13 + 28) = HIDWORD(v34) - DWORD1(v34);
          break;
        case 0x53u:
          v6 = TransformPointBetweenCoordinateSpaces(v13 + 32, v13 + 32, a5, a6);
          v15 = 80;
LABEL_20:
          switch ( v15 )
          {
            case 0:
              goto LABEL_21;
            case 120:
            case 129:
            case 157:
            case 158:
            case 159:
            case 160:
            case 161:
            case 162:
            case 163:
            case 164:
            case 165:
            case 166:
            case 168:
            case 169:
            case 170:
              goto LABEL_59;
            default:
              return v6;
          }
          return v6;
      }
LABEL_19:
      v15 = v9 - 3;
      goto LABEL_20;
    }
    if ( v9 == 544 )
    {
      *(_QWORD *)&v35 = *(_QWORD *)(v13 + 24);
      DWORD2(v35) = *(_DWORD *)(v13 + 24) + *(_DWORD *)(v13 + 32);
      HIDWORD(v35) = *(_DWORD *)(v13 + 28) + *(_DWORD *)(v13 + 36);
      v6 = TransformRectBetweenCoordinateSpaces(&v34, &v35, a5, a6);
      *(_QWORD *)(v13 + 24) = v34;
      *(_DWORD *)(v13 + 32) = DWORD2(v34) - v34;
      *(_DWORD *)(v13 + 36) = HIDWORD(v34) - DWORD1(v34);
      v18 = 32;
      goto LABEL_28;
    }
    if ( v9 != 643 )
    {
      if ( v9 != 834 )
        goto LABEL_15;
      goto LABEL_14;
    }
    v19 = *a3;
    if ( (unsigned __int64)(*a3 - 7) > 1 )
    {
      if ( (unsigned __int64)(v19 - 11) > 1 )
      {
        if ( v19 == 16 )
        {
          LODWORD(v30) = *a4;
          HIDWORD(v30) = a4[1];
          v6 = TransformPointBetweenCoordinateSpaces(&v31, &v30, a5, a6);
          *a4 = v31;
          a4[1] = WORD2(v31);
        }
        goto LABEL_37;
      }
      v20 = TransformPointBetweenCoordinateSpaces(v13 + 4, v13 + 4, a5, a6);
      v21 = v13 + 12;
    }
    else
    {
      v20 = TransformPointBetweenCoordinateSpaces(v13 + 8, v13 + 8, a5, a6);
      v21 = v13 + 16;
    }
    v6 = TransformRectBetweenCoordinateSpaces(v21, v21, a5, a6) | v20;
LABEL_37:
    v18 = v9 - 512;
    goto LABEL_28;
  }
LABEL_15:
  if ( v9 == 673 )
  {
LABEL_21:
    if ( a5 )
    {
      v16 = *(_QWORD *)(a5 + 40);
      LODWORD(v30) = *a4;
      HIDWORD(v30) = (__int16)HIWORD(*(_DWORD *)a4);
      v33 = 0LL;
      v32 = *(_QWORD *)(v16 + 104);
      TransformPointBetweenCoordinateSpaces(&v33, &v32, a6, a5);
      LODWORD(v30) = v33 + v30;
      HIDWORD(v30) += HIDWORD(v33);
      v6 = TransformPointBetweenCoordinateSpaces(&v31, &v30, a5, a6);
      v17 = ((unsigned __int16)(WORD2(v31) - WORD2(v32)) << 16) | (unsigned __int16)(v31 - v32);
LABEL_23:
      *(_QWORD *)a4 = v17;
      return v6;
    }
    return v6;
  }
  if ( v9 == 787 )
  {
    if ( v13 == 0xFFFFFFFFLL )
      return v6;
    goto LABEL_59;
  }
  if ( v9 > 0x112 )
  {
    if ( v9 > 0x33F )
      return v6;
    if ( v9 == 831 )
    {
      if ( a6 && v13 )
      {
        v27 = TransformRectBetweenCoordinateSpaces(v13 + 4, v13 + 4, a5, a6);
        v28 = v13 + 44;
        v29 = 6LL;
        v6 = v27;
        do
        {
          v6 |= TransformRectBetweenCoordinateSpaces(v28, v28, a5, a6);
          v28 += 16LL;
          --v29;
        }
        while ( v29 );
      }
      return v6;
    }
    v18 = v9 - 512;
LABEL_28:
    switch ( v18 )
    {
      case 0:
      case 1:
      case 2:
      case 3:
      case 4:
      case 5:
      case 6:
      case 7:
      case 8:
      case 9:
      case 11:
      case 12:
      case 13:
        goto LABEL_21;
      case 10:
      case 14:
      case 65:
      case 66:
      case 67:
      case 69:
      case 70:
      case 71:
      case 73:
      case 74:
      case 78:
      case 79:
      case 81:
      case 82:
      case 160:
      case 242:
      case 243:
      case 244:
        goto LABEL_59;
      case 16:
        goto LABEL_51;
      default:
        return v6;
    }
    return v6;
  }
  if ( v9 != 274 )
    goto LABEL_19;
  if ( a4[1] )
  {
LABEL_51:
    if ( IsPointerParentNotify(v9, *a3) )
      return v6;
LABEL_59:
    LODWORD(v30) = *a4;
    HIDWORD(v30) = (__int16)HIWORD(*(_DWORD *)a4);
    v6 = TransformPointBetweenCoordinateSpaces(&v31, &v30, a5, a6);
    v17 = (WORD2(v31) << 16) | (unsigned __int16)v31;
    goto LABEL_23;
  }
  return v6;
}
