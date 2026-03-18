/*
 * XREFs of ?DeleteHandle@CResourceTable@@QEAAJI@Z @ 0x180174840
 * Callers:
 *     ?Channel_CreateResource@CComposition@@IEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_CHANNEL_CREATERESOURCE@@@Z @ 0x1801557B0 (-Channel_CreateResource@CComposition@@IEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCM.c)
 * Callees:
 *     memset_0 @ 0x1802215C0 (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CResourceTable::DeleteHandle(CResourceTable *this, unsigned int a2)
{
  int *v4; // rsi
  int v5; // r9d
  unsigned int v7; // edx
  _DWORD *v8; // r8

  if ( !a2 || a2 >= *((_DWORD *)this + 7) )
    return 2147942406LL;
  v4 = (int *)(*((_QWORD *)this + 5) + *((_DWORD *)this + 6) * a2);
  v5 = *v4;
  if ( !*v4 || !v4 )
    return 2147942406LL;
  if ( *((_QWORD *)v4 + 1) )
  {
    v8 = (_DWORD *)*((_QWORD *)this + 7);
    if ( v5 != 164 )
    {
      v7 = v5 - 2;
      switch ( v5 )
      {
        case 2:
        case 44:
        case 76:
        case 91:
        case 137:
          --v8[30];
          goto LABEL_18;
        case 31:
          --v8[31];
          goto LABEL_18;
        case 35:
        case 138:
          --v8[26];
          goto LABEL_18;
        case 70:
          --v8[29];
          goto LABEL_18;
        case 71:
        case 139:
        case 156:
          break;
        default:
LABEL_15:
          --v8[27];
          goto LABEL_6;
      }
    }
    --v8[28];
    v7 = v5 - 2;
    if ( v5 == 164 )
    {
LABEL_10:
      --dword_1803DE910;
    }
    else
    {
LABEL_6:
      if ( v7 <= 0x9A )
      {
LABEL_18:
        switch ( v7 )
        {
          case 0u:
          case 0x2Au:
          case 0x4Au:
          case 0x59u:
          case 0x87u:
            --dword_1803DE918;
            break;
          case 1u:
          case 2u:
          case 3u:
          case 4u:
          case 5u:
          case 6u:
          case 7u:
          case 8u:
          case 9u:
          case 0xAu:
          case 0xBu:
          case 0xCu:
          case 0xDu:
          case 0xEu:
          case 0xFu:
          case 0x10u:
          case 0x11u:
          case 0x12u:
          case 0x13u:
          case 0x14u:
          case 0x15u:
          case 0x16u:
          case 0x17u:
          case 0x18u:
          case 0x19u:
          case 0x1Au:
          case 0x1Bu:
          case 0x1Cu:
          case 0x1Eu:
          case 0x1Fu:
          case 0x20u:
          case 0x22u:
          case 0x23u:
          case 0x24u:
          case 0x25u:
          case 0x26u:
          case 0x27u:
          case 0x28u:
          case 0x29u:
          case 0x2Bu:
          case 0x2Cu:
          case 0x2Du:
          case 0x2Eu:
          case 0x2Fu:
          case 0x30u:
          case 0x31u:
          case 0x32u:
          case 0x33u:
          case 0x34u:
          case 0x35u:
          case 0x36u:
          case 0x37u:
          case 0x38u:
          case 0x39u:
          case 0x3Au:
          case 0x3Bu:
          case 0x3Cu:
          case 0x3Du:
          case 0x3Eu:
          case 0x3Fu:
          case 0x40u:
          case 0x41u:
          case 0x42u:
          case 0x43u:
          case 0x46u:
          case 0x47u:
          case 0x48u:
          case 0x49u:
          case 0x4Bu:
          case 0x4Cu:
          case 0x4Du:
          case 0x4Eu:
          case 0x4Fu:
          case 0x50u:
          case 0x51u:
          case 0x52u:
          case 0x53u:
          case 0x54u:
          case 0x55u:
          case 0x56u:
          case 0x57u:
          case 0x58u:
          case 0x5Au:
          case 0x5Bu:
          case 0x5Cu:
          case 0x5Du:
          case 0x5Eu:
          case 0x5Fu:
          case 0x60u:
          case 0x61u:
          case 0x62u:
          case 0x63u:
          case 0x64u:
          case 0x65u:
          case 0x66u:
          case 0x67u:
          case 0x68u:
          case 0x69u:
          case 0x6Au:
          case 0x6Bu:
          case 0x6Cu:
          case 0x6Du:
          case 0x6Eu:
          case 0x6Fu:
          case 0x70u:
          case 0x71u:
          case 0x72u:
          case 0x73u:
          case 0x74u:
          case 0x75u:
          case 0x76u:
          case 0x77u:
          case 0x78u:
          case 0x79u:
          case 0x7Au:
          case 0x7Bu:
          case 0x7Cu:
          case 0x7Du:
          case 0x7Eu:
          case 0x7Fu:
          case 0x80u:
          case 0x81u:
          case 0x82u:
          case 0x83u:
          case 0x84u:
          case 0x85u:
          case 0x86u:
          case 0x8Au:
          case 0x8Bu:
          case 0x8Cu:
          case 0x8Du:
          case 0x8Eu:
          case 0x8Fu:
          case 0x90u:
          case 0x91u:
          case 0x92u:
          case 0x93u:
          case 0x94u:
          case 0x95u:
          case 0x96u:
          case 0x97u:
          case 0x98u:
          case 0x99u:
            goto LABEL_7;
          case 0x1Du:
            --dword_1803DE91C;
            break;
          case 0x21u:
          case 0x88u:
            --dword_1803DE908;
            break;
          case 0x44u:
            --dword_1803DE914;
            break;
          case 0x45u:
          case 0x89u:
          case 0x9Au:
            goto LABEL_10;
          default:
            goto LABEL_15;
        }
      }
      else
      {
LABEL_7:
        --dword_1803DE90C;
      }
    }
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)v4 + 1) + 16LL))(*((_QWORD *)v4 + 1));
    *((_QWORD *)v4 + 1) = 0LL;
  }
  memset_0((void *)(*((_QWORD *)this + 5) + a2 * *((_DWORD *)this + 6)), 0, *((unsigned int *)this + 6));
  return 0LL;
}
