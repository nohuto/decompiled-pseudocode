/*
 * XREFs of ?Channel_ReleaseResource@CComposition@@IEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_CHANNEL_RELEASERESOURCE@@@Z @ 0x1801721E0
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?FailFastOnMalformedPacket@CComposition@@KAXW4MILCMD_CRASHID@@PEBX@Z @ 0x18020C1F8 (-FailFastOnMalformedPacket@CComposition@@KAXW4MILCMD_CRASHID@@PEBX@Z.c)
 *     memset_0 @ 0x1802215C0 (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CComposition::Channel_ReleaseResource(
        CComposition *this,
        struct CChannelContext *a2,
        struct CResourceTable *a3,
        const struct tagMILCMD_CHANNEL_RELEASERESOURCE *a4)
{
  unsigned int v4; // edi
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rbp
  unsigned int v10; // ebx
  int *v11; // r14
  int v12; // r9d
  unsigned int v13; // edx
  _DWORD *v15; // r8

  v4 = *((_DWORD *)a4 + 1);
  if ( !v4
    || v4 >= *((_DWORD *)a3 + 7)
    || (v6 = *((_QWORD *)a3 + 5), v7 = *((_DWORD *)a3 + 6) * v4, !*(_DWORD *)(v7 + v6))
    || (v8 = *(_QWORD *)(v7 + v6 + 8)) == 0 )
  {
    CComposition::FailFastOnMalformedPacket(1574860530LL, 0LL);
  }
  (*(void (__fastcall **)(__int64, struct CChannelContext *, _QWORD))(*(_QWORD *)v8 + 168LL))(v8, a2, 0LL);
  v9 = *((_QWORD *)a2 + 6);
  v10 = -2147024890;
  if ( v4 < *(_DWORD *)(v9 + 28)
    && (v11 = (int *)(*(_QWORD *)(v9 + 40) + *(_DWORD *)(v9 + 24) * v4), (v12 = *v11) != 0)
    && v11 )
  {
    if ( *((_QWORD *)v11 + 1) )
    {
      v15 = *(_DWORD **)(v9 + 56);
      if ( v12 != 164 )
      {
        v13 = v12 - 2;
        switch ( v12 )
        {
          case 2:
          case 44:
          case 76:
          case 91:
          case 137:
            --v15[30];
            goto LABEL_23;
          case 31:
            --v15[31];
            goto LABEL_23;
          case 35:
          case 138:
            --v15[26];
            goto LABEL_23;
          case 70:
            --v15[29];
            goto LABEL_23;
          case 71:
          case 139:
          case 156:
            break;
          default:
LABEL_20:
            --v15[27];
            goto LABEL_10;
        }
      }
      --v15[28];
      v13 = v12 - 2;
      if ( v12 == 164 )
      {
LABEL_15:
        --dword_1803DE910;
      }
      else
      {
LABEL_10:
        if ( v13 <= 0x9A )
        {
LABEL_23:
          switch ( v13 )
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
              goto LABEL_11;
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
              goto LABEL_15;
            default:
              goto LABEL_20;
          }
        }
        else
        {
LABEL_11:
          --dword_1803DE90C;
        }
      }
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)v11 + 1) + 16LL))(*((_QWORD *)v11 + 1));
      *((_QWORD *)v11 + 1) = 0LL;
    }
    memset_0((void *)(*(_QWORD *)(v9 + 40) + v4 * *(_DWORD *)(v9 + 24)), 0, *(unsigned int *)(v9 + 24));
    return 0;
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024890, 0x8D6u, 0LL);
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024890, 0x591u, 0LL);
  }
  return v10;
}
