/*
 * XREFs of PerfControlCppcRequestMsr @ 0x140001A80
 * Callers:
 *     <none>
 * Callees:
 *     ReadIoMemRawEx @ 0x140001C50 (ReadIoMemRawEx.c)
 */

void __fastcall PerfControlCppcRequestMsr(__int64 a1, _QWORD *a2, char a3, char a4)
{
  __int64 v5; // r11
  __int64 IoMemRaw; // rax
  unsigned __int8 *v7; // r10
  unsigned __int64 v8; // r8
  int v9; // eax
  __int64 v10; // rcx
  unsigned __int8 v11; // r9
  unsigned int v12; // r9d
  int v13; // ecx
  _WORD *v14; // r9
  unsigned __int8 v15; // cl
  _BYTE *v16; // rax
  signed __int32 v17[10]; // [rsp+0h] [rbp-28h] BYREF

  v5 = a1;
  if ( a3 || a4 )
  {
    if ( !*(_BYTE *)(a1 + 137) || a4 )
    {
      IoMemRaw = ReadIoMemRawEx(a1 + 152);
      *(_BYTE *)(v5 + 137) = 1;
    }
    else
    {
      IoMemRaw = *(_QWORD *)(a1 + 176);
      v7 = (unsigned __int8 *)(a1 + 152);
    }
    v8 = *(_QWORD *)(v5 + 184) & *a2 | IoMemRaw & ~*(_QWORD *)(v5 + 184);
    v9 = *v7;
    if ( (_BYTE)v9 )
    {
      if ( (_BYTE)v9 != 10 )
      {
        v10 = *(_QWORD *)(v7 + 4);
        v11 = v7[3];
        if ( v9 == 1 )
        {
          switch ( v11 )
          {
            case 8u:
              __outbyte(v10, v8);
              break;
            case 0x10u:
              __outword(v10, v8);
              break;
            case 0x20u:
              __outdword(v10, v8);
              break;
          }
        }
        else if ( v9 == 127 && v11 == 64 )
        {
          __writemsr(v10, v8);
        }
        goto LABEL_8;
      }
      v12 = v7[1] + v7[2];
      if ( v12 > 8 )
      {
        if ( v12 <= 0x10 )
        {
          v13 = 16;
        }
        else
        {
          v13 = 64;
          if ( v12 <= 0x20 )
            v13 = 32;
        }
      }
      else
      {
        v13 = 8;
      }
      v14 = (_WORD *)(*(_QWORD *)(v7 + 4) + *(_QWORD *)(*((_QWORD *)v7 + 2) + 88LL));
      switch ( v13 )
      {
        case 16:
          *v14 = v8;
          break;
        case 8:
          *(_BYTE *)v14 = v8;
          break;
        case 32:
          *(_DWORD *)v14 = v8;
          break;
        default:
          *(_QWORD *)v14 = v8;
          break;
      }
    }
    else
    {
      v15 = v7[3];
      v16 = (_BYTE *)*((_QWORD *)v7 + 2);
      switch ( v15 )
      {
        case 8u:
          *v16 = v8;
          break;
        case 0x10u:
          *(_WORD *)v16 = v8;
          break;
        case 0x20u:
          *(_DWORD *)v16 = v8;
          break;
        case 0x40u:
          *(_QWORD *)v16 = v8;
          break;
        default:
          goto LABEL_8;
      }
    }
    _InterlockedOr(v17, 0);
LABEL_8:
    *(_QWORD *)(v5 + 176) = v8;
  }
}
