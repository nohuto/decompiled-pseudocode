/*
 * XREFs of Bulk_Transfer_PrepareForCompletion @ 0x140017FE0
 * Callers:
 *     Bulk_Transfer_Complete @ 0x140016FF4 (Bulk_Transfer_Complete.c)
 * Callees:
 *     WPP_RECORDER_SF_DDDqdD @ 0x140018850 (WPP_RECORDER_SF_DDDqdD.c)
 */

void __fastcall Bulk_Transfer_PrepareForCompletion(__int64 a1, __int64 a2, int a3)
{
  __int64 v4; // rdx
  __int64 v6; // rcx
  int v7; // eax
  int v8; // eax
  _QWORD *v9; // rdi
  __int64 v10; // rsi
  _QWORD *v11; // rcx
  struct _MDL *v12; // rcx
  __int64 v13; // r8
  int v14; // eax

  v4 = *(_QWORD *)(a2 + 48);
  if ( *(_WORD *)(v4 + 2) == 56 )
  {
LABEL_2:
    v6 = 36LL;
  }
  else
  {
    switch ( *(_WORD *)(v4 + 2) )
    {
      case '9':
      case ':':
        v6 = 52LL;
        break;
      default:
        goto LABEL_2;
    }
  }
  *(_DWORD *)(v4 + v6) = *(_DWORD *)(a2 + 108);
  v7 = *(_DWORD *)(a2 + 68);
  if ( v7 == 28 )
  {
LABEL_4:
    *(_DWORD *)(v4 + 4) = 0;
LABEL_7:
    v8 = 0;
    goto LABEL_8;
  }
  switch ( v7 )
  {
    case 0:
      *(_DWORD *)(v4 + 4) = a3;
      if ( a3 == 1 )
        goto LABEL_7;
      if ( a3 > -1073738240 )
      {
        switch ( a3 )
        {
          case -1073676288:
            v8 = -1073741536;
            goto LABEL_8;
          case -1073737728:
            v8 = -1073741670;
            goto LABEL_8;
          case -1073713152:
            v8 = -1073741810;
            goto LABEL_8;
          case 0:
            goto LABEL_7;
        }
LABEL_27:
        v8 = -1073741823;
        goto LABEL_8;
      }
      if ( a3 == -1073738240 )
      {
        v8 = -1073741637;
      }
      else
      {
        if ( a3 != -1073739264 && a3 != -2147483136 && a3 != -2147482880 && a3 != -2147482112 )
          goto LABEL_27;
        v8 = -1073741811;
      }
LABEL_8:
      *(_DWORD *)(a2 + 72) = v8;
      ++*(_DWORD *)(a1 + 248);
      *(_QWORD *)(a1 + 256) += *(unsigned int *)(a2 + 108);
      if ( *(int *)(a2 + 72) < 0 )
        ++*(_DWORD *)(a1 + 252);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_DDDqdD(
          *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
          *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 143LL),
          a3,
          a1);
      v9 = *(_QWORD **)(a2 + 96);
      if ( v9 )
      {
        v10 = *(_QWORD *)(a2 + 56);
        *(_BYTE *)(v10 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v10 + 96));
        v11 = *(_QWORD **)(v10 + 232);
        if ( *v11 != v10 + 224 )
          __fastfail(3u);
        v9[1] = v11;
        *v9 = v10 + 224;
        *v11 = v9;
        *(_QWORD *)(v10 + 232) = v9;
        KeReleaseSpinLock((PKSPIN_LOCK)(v10 + 96), *(_BYTE *)(v10 + 104));
        *(_QWORD *)(a2 + 96) = 0LL;
      }
      v12 = *(struct _MDL **)(a2 + 80);
      if ( v12 )
      {
        v13 = *(_QWORD *)(a2 + 48);
        if ( *(_WORD *)(v13 + 2) != 56 )
        {
          switch ( *(_WORD *)(v13 + 2) )
          {
            case '9':
            case ':':
              goto LABEL_20;
            default:
              break;
          }
        }
        if ( v12 != *(struct _MDL **)(v13 + 48) )
        {
LABEL_20:
          if ( v12 != *(struct _MDL **)(*(_QWORD *)(a2 + 56) + 120LL) )
          {
            IoFreeMdl(v12);
            *(_QWORD *)(a2 + 80) = 0LL;
          }
        }
      }
      *(_BYTE *)(a2 + 16) = 0;
      return;
    case 1:
    case 13:
    case 26:
      goto LABEL_4;
    case 2:
      *(_DWORD *)(v4 + 4) = -1073741805;
      goto LABEL_27;
    case 3:
    case 31:
      *(_DWORD *)(v4 + 4) = -1073741806;
      v8 = -1073741823;
      goto LABEL_8;
    case 6:
      *(_DWORD *)(v4 + 4) = -1073741820;
      v8 = -1073741823;
      goto LABEL_8;
    case 10:
      *(_DWORD *)(v4 + 4) = -1073741803;
      goto LABEL_27;
    case 20:
      *(_DWORD *)(v4 + 4) = -1073741804;
      goto LABEL_27;
    case 23:
      *(_DWORD *)(v4 + 4) = -1073545216;
      v8 = -1073741823;
      goto LABEL_8;
    case 27:
      *(_DWORD *)(v4 + 4) = -1073610752;
      goto LABEL_27;
    case 34:
      *(_DWORD *)(v4 + 4) = -1073741802;
      goto LABEL_27;
    case 199:
      v14 = -1073741807;
      if ( _bittest64((const signed __int64 *)(*(_QWORD *)(a1 + 40) + 736LL), 0x3Eu) )
        v14 = -1073709056;
      *(_DWORD *)(v4 + 4) = v14;
      goto LABEL_27;
    default:
      *(_DWORD *)(v4 + 4) = -1073741807;
      goto LABEL_27;
  }
}
