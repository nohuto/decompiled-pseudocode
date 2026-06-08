/*
 * XREFs of GetCpcDifferentialFeedback @ 0x140001870
 * Callers:
 *     <none>
 * Callees:
 *     ReadIoMemRawEx @ 0x140001574 (ReadIoMemRawEx.c)
 */

void __fastcall GetCpcDifferentialFeedback(__int64 a1, __int64 a2, unsigned __int64 *a3, unsigned __int64 *a4)
{
  __int64 v4; // r11
  int v5; // edx
  unsigned __int64 v6; // rdi
  __int64 v10; // r9
  char v11; // r8
  unsigned __int64 v12; // rdx
  char v13; // cl
  unsigned __int8 v14; // cl
  int v15; // ecx
  __int64 v16; // r8
  char v17; // dl
  int v18; // ecx
  char v19; // cl
  unsigned __int8 v20; // cl
  unsigned __int8 v21; // al
  unsigned __int8 v22; // al
  unsigned __int32 v23; // eax
  unsigned __int32 v24; // eax
  unsigned __int16 v25; // ax
  unsigned __int16 v26; // ax
  unsigned __int64 IoMemRaw; // rax
  __int64 v28; // r11
  char v29; // cl
  unsigned __int64 v30; // rax
  __int64 v31; // r11
  char v32; // cl
  unsigned __int8 v33; // cl

  v4 = a1 + 272;
  v5 = *(unsigned __int8 *)(a1 + 272);
  v6 = 0LL;
  if ( (_BYTE)v5 == 1 || (unsigned __int8)(v5 - 126) <= 1u )
  {
    if ( a1 == -272 )
    {
      v12 = 0LL;
      goto LABEL_13;
    }
    if ( (_BYTE)v5 == 126 )
    {
      v12 = *(unsigned int *)(a1 + 276);
      goto LABEL_13;
    }
    v10 = *(_QWORD *)(a1 + 276);
    v11 = *(_BYTE *)(a1 + 275);
    if ( v5 == 1 )
    {
      switch ( v11 )
      {
        case 8:
          v21 = __inbyte(v10);
          v12 = v21;
          break;
        case 32:
          v23 = __indword(v10);
          v12 = v23;
          break;
        case 16:
          v25 = __inword(v10);
          v12 = v25;
          break;
        default:
          v12 = 0LL;
          goto LABEL_13;
      }
    }
    else
    {
      if ( v5 != 127 )
      {
        v12 = 0LL;
        goto LABEL_13;
      }
      if ( v11 != 64 )
      {
        v12 = 0LL;
        goto LABEL_13;
      }
      v12 = __readmsr(v10);
    }
    if ( v12 )
    {
      v13 = *(_BYTE *)(a1 + 274);
      if ( v13 )
        v12 >>= v13;
      v14 = *(_BYTE *)(v4 + 1);
      if ( v14 < 0x40u )
        goto LABEL_12;
    }
  }
  else
  {
    IoMemRaw = ReadIoMemRawEx(a1 + 272);
    v12 = IoMemRaw;
    if ( IoMemRaw )
    {
      v29 = *(_BYTE *)(v28 + 2);
      if ( v29 )
        v12 = IoMemRaw >> v29;
      v14 = *(_BYTE *)(v28 + 1);
      if ( v14 < 0x40u )
LABEL_12:
        v12 &= (1LL << v14) - 1;
    }
  }
LABEL_13:
  *a3 = v12;
  v15 = *(unsigned __int8 *)(a1 + 296);
  if ( (_BYTE)v15 == 1 || (unsigned __int8)(v15 - 126) <= 1u )
  {
    if ( a1 != -296 )
    {
      if ( (_BYTE)v15 == 126 )
      {
        v6 = *(unsigned int *)(a1 + 300);
        goto LABEL_25;
      }
      v16 = *(_QWORD *)(a1 + 300);
      v17 = *(_BYTE *)(a1 + 299);
      v18 = v15 - 1;
      if ( !v18 )
      {
        switch ( v17 )
        {
          case 8:
            v22 = __inbyte(v16);
            v6 = v22;
            break;
          case 16:
            v26 = __inword(v16);
            v6 = v26;
            break;
          case 32:
            v24 = __indword(v16);
            v6 = v24;
            break;
          default:
            goto LABEL_25;
        }
LABEL_20:
        if ( v6 )
        {
          v19 = *(_BYTE *)(a1 + 298);
          if ( v19 )
            v6 >>= v19;
          v20 = *(_BYTE *)(a1 + 297);
          if ( v20 < 0x40u )
            v6 &= (1LL << v20) - 1;
        }
        goto LABEL_25;
      }
      if ( v18 == 126 && v17 == 64 )
      {
        v6 = __readmsr(v16);
        goto LABEL_20;
      }
    }
LABEL_25:
    *a4 = v6;
    return;
  }
  v30 = ReadIoMemRawEx(a1 + 296);
  if ( v30 )
  {
    v32 = *(_BYTE *)(v31 + 2);
    if ( v32 )
      v30 >>= v32;
    v33 = *(_BYTE *)(v31 + 1);
    if ( v33 < 0x40u )
      v30 &= (1LL << v33) - 1;
  }
  *a4 = v30;
}
