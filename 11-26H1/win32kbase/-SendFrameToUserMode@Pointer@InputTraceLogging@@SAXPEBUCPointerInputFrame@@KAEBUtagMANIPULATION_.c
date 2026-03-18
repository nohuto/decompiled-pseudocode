/*
 * XREFs of ?SendFrameToUserMode@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@KAEBUtagMANIPULATION_INPUT_INFO@@@Z @ 0x14008C414
 * Callers:
 *     ?ForwardInputToManipulationThread@CTouchProcessor@@QEAAXPEBUCPointerInputFrame@@W4MIT_INPUT_INTEROP_CALLBACK@@@Z @ 0x14008A620 (-ForwardInputToManipulationThread@CTouchProcessor@@QEAAXPEBUCPointerInputFrame@@W4MIT_INPUT_INTE.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@4444@Z @ 0x140002B24 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U2@@-$_tlgWriteTemplate@$.c)
 *     _tlgKeywordOn @ 0x1400E4F60 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@U2@U2@U2@U1@U1@U?$_tlgWrapperByRef@$0BA@@@U2@U1@U2@U2@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@44444444433AEBU?$_tlgWrapperByRef@$0BA@@@43444444@Z @ 0x1401949AC (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@U2@U2@U2@U1@U1@U-$_.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 */

void __fastcall InputTraceLogging::Pointer::SendFrameToUserMode(
        const struct CPointerInputFrame *a1,
        __int64 a2,
        const struct tagMANIPULATION_INPUT_INFO *a3)
{
  __int64 v3; // r9
  unsigned int v4; // ebx
  __int64 v6; // r8
  __int128 *v7; // rax
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int64 v21; // r10
  int v22; // r11d
  char v23; // cf
  __int64 v24; // [rsp+D0h] [rbp-80h] BYREF
  int v25; // [rsp+D8h] [rbp-78h] BYREF
  __int64 v26; // [rsp+DCh] [rbp-74h] BYREF
  int v27; // [rsp+E4h] [rbp-6Ch] BYREF
  int v28; // [rsp+E8h] [rbp-68h] BYREF
  int v29; // [rsp+ECh] [rbp-64h] BYREF
  int v30; // [rsp+F0h] [rbp-60h] BYREF
  int v31; // [rsp+F4h] [rbp-5Ch] BYREF
  int v32; // [rsp+F8h] [rbp-58h] BYREF
  int v33; // [rsp+FCh] [rbp-54h] BYREF
  int v34; // [rsp+100h] [rbp-50h] BYREF
  int v35; // [rsp+104h] [rbp-4Ch] BYREF
  int v36; // [rsp+108h] [rbp-48h] BYREF
  __int64 v37; // [rsp+110h] [rbp-40h] BYREF
  __int64 v38; // [rsp+118h] [rbp-38h] BYREF
  __int64 v39; // [rsp+120h] [rbp-30h] BYREF
  __int128 *v40; // [rsp+128h] [rbp-28h] BYREF
  __int64 v41; // [rsp+130h] [rbp-20h] BYREF
  __int64 v42; // [rsp+138h] [rbp-18h] BYREF
  __int64 v43; // [rsp+140h] [rbp-10h] BYREF
  __int128 v44; // [rsp+150h] [rbp+0h]
  __int128 v45; // [rsp+160h] [rbp+10h]
  __int128 v46; // [rsp+170h] [rbp+20h]
  __int128 v47; // [rsp+180h] [rbp+30h]
  __int128 v48; // [rsp+190h] [rbp+40h]
  __int128 v49; // [rsp+1A0h] [rbp+50h]
  __int128 v50; // [rsp+1B0h] [rbp+60h]
  __int128 v51; // [rsp+1C0h] [rbp+70h]
  __int128 v52; // [rsp+1D0h] [rbp+80h]
  __int128 v53; // [rsp+1E0h] [rbp+90h]
  __int128 v54; // [rsp+1F0h] [rbp+A0h]
  __int128 v55; // [rsp+200h] [rbp+B0h] BYREF
  __int128 v56; // [rsp+210h] [rbp+C0h]
  __int128 v57; // [rsp+220h] [rbp+D0h]
  __int128 v58; // [rsp+230h] [rbp+E0h]

  LODWORD(v3) = dword_1402A9E40;
  v4 = 0;
  if ( dword_1402A9E40 )
  {
    if ( (qword_1402A9E50 & 0x20) != 0 )
    {
      v6 = qword_1402A9E58;
      if ( (qword_1402A9E58 & 0x20) == qword_1402A9E58 )
      {
        if ( (unsigned int)dword_1402A9E40 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1402A9E40, 32LL) )
        {
          LODWORD(v24) = *((_DWORD *)a3 + 39);
          v23 = *((_DWORD *)a3 + 38) & 1;
          LODWORD(v26) = v22;
          HIDWORD(v24) = -v23;
          v25 = *((_DWORD *)a3 + 37);
          HIDWORD(v26) = *(_DWORD *)(v21 + 40);
          v38 = *(_QWORD *)(v21 + 72);
          v37 = *(_QWORD *)(v21 + 216);
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
            (__int64)&dword_1402A9E40,
            (__int64)&unk_140289D84,
            v6,
            v3,
            (__int64)&v37,
            (__int64)&v38,
            (__int64)&v26 + 4,
            (__int64)&v26,
            (__int64)&v25,
            (__int64)&v24 + 4,
            (__int64)&v24);
          v6 = qword_1402A9E58;
          LODWORD(v3) = dword_1402A9E40;
        }
        if ( *((_DWORD *)a3 + 37) )
        {
          do
          {
            v7 = (__int128 *)((char *)a3 + 240 * v4 + 160);
            v8 = v7[1];
            v44 = *v7;
            v9 = v7[2];
            v45 = v8;
            v10 = v7[3];
            v46 = v9;
            v11 = v7[4];
            v47 = v10;
            v12 = v7[5];
            v48 = v11;
            v13 = v7[6];
            v49 = v12;
            v14 = v7[7];
            v7 += 8;
            v50 = v13;
            v51 = v14;
            v15 = v7[1];
            v52 = *v7;
            v16 = v7[2];
            v53 = v15;
            v17 = v7[3];
            v54 = v16;
            v18 = v7[4];
            v55 = v17;
            v19 = v7[5];
            v56 = v18;
            v20 = v7[6];
            v57 = v19;
            v58 = v20;
            if ( (unsigned int)v3 > 4 && (qword_1402A9E50 & 0x20) != 0 && (v6 & 0x20) == v6 )
            {
              v26 = *(_QWORD *)((char *)&v58 + 4);
              v25 = v58;
              v24 = *((_QWORD *)&v57 + 1);
              v27 = v57;
              v39 = *((_QWORD *)&v56 + 1);
              v28 = v56;
              v40 = &v55;
              v41 = *((_QWORD *)&v54 + 1);
              v42 = v54;
              v29 = HIDWORD(v53);
              v30 = DWORD2(v53);
              v31 = DWORD1(v53);
              v32 = v53;
              v33 = HIDWORD(v46);
              v34 = DWORD2(v46);
              v35 = DWORD1(v46);
              v36 = v46;
              LODWORD(v37) = HIDWORD(v44);
              LODWORD(v38) = DWORD1(v44);
              v43 = v49;
              _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
                (unsigned int)&dword_1402A9E40,
                (unsigned int)&unk_140289E1E,
                v6,
                v3,
                (__int64)&v43,
                (__int64)&v38,
                (__int64)&v37,
                (__int64)&v36,
                (__int64)&v35,
                (__int64)&v34,
                (__int64)&v33,
                (__int64)&v32,
                (__int64)&v31,
                (__int64)&v30,
                (__int64)&v29,
                (__int64)&v42,
                (__int64)&v41,
                (__int64)&v40,
                (__int64)&v28,
                (__int64)&v39,
                (__int64)&v27,
                (__int64)&v24,
                (__int64)&v24 + 4,
                (__int64)&v25,
                (__int64)&v26,
                (__int64)&v26 + 4);
              v6 = qword_1402A9E58;
              LODWORD(v3) = dword_1402A9E40;
            }
            ++v4;
          }
          while ( v4 != *((_DWORD *)a3 + 37) );
        }
      }
    }
  }
}
