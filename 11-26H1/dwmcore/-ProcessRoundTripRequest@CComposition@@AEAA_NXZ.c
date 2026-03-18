/*
 * XREFs of ?ProcessRoundTripRequest@CComposition@@AEAA_NXZ @ 0x18014EA0C
 * Callers:
 *     ?PostRender@CComposition@@IEAAJ_N@Z @ 0x180030DC0 (-PostRender@CComposition@@IEAAJ_N@Z.c)
 * Callees:
 *     ?NotifyHelper@CComposition@@QEAAJPEAUMIL_MESSAGE@@@Z @ 0x18014EB54 (-NotifyHelper@CComposition@@QEAAJPEAUMIL_MESSAGE@@@Z.c)
 *     ?RemoveAt@?$DynArray@URoudTripRequestTracker@CComposition@@$0A@@@QEAAJI@Z @ 0x18014EBF8 (-RemoveAt@-$DynArray@URoudTripRequestTracker@CComposition@@$0A@@@QEAAJI@Z.c)
 *     McTemplateU0qqx_EventWriteTransfer @ 0x18014EC84 (McTemplateU0qqx_EventWriteTransfer.c)
 */

char __fastcall CComposition::ProcessRoundTripRequest(CComposition *this, int a2)
{
  char v2; // r14
  unsigned int v3; // ebp
  __int64 *v6; // r15
  __int64 v7; // rdi
  __int64 v8; // rbx
  int v9; // ecx
  int v10; // ecx
  int v11; // eax
  __m128i v12; // xmm6
  unsigned int v13; // eax
  unsigned __int32 v14; // xmm0_4
  int v15; // [rsp+30h] [rbp-48h] BYREF
  __int128 v16; // [rsp+34h] [rbp-44h]
  __int64 v17; // [rsp+44h] [rbp-34h]

  v2 = 0;
  v3 = 0;
  if ( *((_DWORD *)this + 246) )
  {
    v6 = (__int64 *)((char *)this + 960);
    do
    {
      v7 = *v6;
      v8 = 2LL * v3;
      v9 = *(_DWORD *)(*v6 + 16LL * v3 + 4);
      if ( v9 )
      {
        v10 = v9 - 1;
        if ( v10 )
        {
          if ( v10 == 1 && *((_QWORD *)this + 110) >= *(_QWORD *)(v7 + 16LL * v3 + 8) )
          {
            v15 = 8;
            v17 = 0LL;
            v11 = *(_DWORD *)(v7 + 16LL * v3);
            v16 = 0LL;
            DWORD1(v16) = v11;
            CComposition::NotifyHelper(this, (struct MIL_MESSAGE *)&v15);
            *(_DWORD *)(v7 + 16LL * v3 + 4) = 0;
            *(_QWORD *)(v7 + 16LL * v3 + 8) = 0LL;
            v12 = *(__m128i *)(v7 + 16LL * v3);
            DynArray<CComposition::RoudTripRequestTracker,0>::RemoveAt(v6, v3);
            v13 = v3 - 1;
            if ( !v3 )
              v13 = 0;
            v3 = v13;
            goto LABEL_13;
          }
        }
        else
        {
          *(_DWORD *)(v7 + 16LL * v3 + 4) = 2;
          *(_QWORD *)(v7 + 16LL * v3 + 8) = *((_QWORD *)this + 110) + 1LL;
        }
      }
      v12 = *(__m128i *)(v7 + 16LL * v3);
LABEL_13:
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      {
        v14 = _mm_srli_si128(v12, 8).m128i_u32[0];
        McTemplateU0qqx_EventWriteTransfer(v14, a2, v12.m128i_i32[1], v12.m128i_i32[0], v14);
      }
      ++v3;
      v2 |= *(_DWORD *)(v7 + 8 * v8 + 4) == 2;
    }
    while ( v3 < *((_DWORD *)this + 246) );
  }
  return v2;
}
