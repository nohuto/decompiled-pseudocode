/*
 * XREFs of ?AsyncFlush@CChannel@@UEAAJII@Z @ 0x180118210
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18002D600 (--3@YAXPEAX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?EndItem@CDataStreamWriter@@QEAAJXZ @ 0x180118950 (-EndItem@CDataStreamWriter@@QEAAJXZ.c)
 *     ?BeginItem@CDataStreamWriter@@QEAAJXZ @ 0x180118A8C (-BeginItem@CDataStreamWriter@@QEAAJXZ.c)
 *     ?Create@CCommandBatch@@SAJIPEAPEAV1@@Z @ 0x180118BB8 (-Create@CCommandBatch@@SAJIPEAPEAV1@@Z.c)
 *     ?AllocateNewBlock@CDataStreamWriter@@IEAAJI@Z @ 0x180118C8C (-AllocateNewBlock@CDataStreamWriter@@IEAAJI@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CChannel::AsyncFlush(CChannel *this, int a2, int a3)
{
  __int64 v3; // r12
  unsigned int v6; // ecx
  CDataStreamWriter **v7; // r14
  unsigned int v8; // ebx
  CDataStreamWriter *v9; // rsi
  _DWORD *v10; // rcx
  __int64 v11; // rsi
  __int64 v12; // r14
  unsigned int v13; // edx
  unsigned int v14; // ecx
  int v15; // eax
  int v16; // edi
  __int64 v17; // r15
  int v18; // ebp
  unsigned int v19; // eax
  unsigned int v20; // eax
  int v22; // eax
  unsigned int NewBlock; // edi
  __int64 v24; // rdx
  __int64 *i; // rcx
  unsigned int v26; // edx
  unsigned int v27; // eax
  CDataStreamWriter **v28; // rax
  CDataStreamWriter **v29; // rdx
  int v30; // r9d
  unsigned int v31; // eax
  __int64 *v32; // rdx
  __int64 **v33; // rax
  unsigned int v34; // edx
  unsigned int v35; // edx
  __int64 v36; // [rsp+30h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v3 = *((_QWORD *)this + 8);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 56LL))(v3);
  HIDWORD(v36) = a2;
  v7 = (CDataStreamWriter **)((char *)this + 176);
  v8 = 0;
  LODWORD(v36) = 34;
  if ( !*((_QWORD *)this + 22) )
  {
    v22 = CCommandBatch::Create(v6, (struct CCommandBatch **)this + 22);
    NewBlock = v22;
    if ( v22 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x109,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\channel.cpp",
        (const char *)(unsigned int)v22);
      v24 = 241LL;
LABEL_22:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v24,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\channel.cpp",
        (const char *)NewBlock);
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x8F,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\channel.cpp",
        (const char *)NewBlock);
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x6F,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\channel.cpp",
        (const char *)NewBlock);
      v8 = NewBlock;
      goto LABEL_16;
    }
  }
  v9 = *v7;
  v10 = (_DWORD *)*((_QWORD *)*v7 + 4);
  if ( v10 )
  {
    if ( (unsigned int)(v10[4] - v10[5]) >= 0x10 )
      goto LABEL_4;
    if ( !v10[5] )
    {
      operator delete(v10);
      *((_QWORD *)v9 + 4) = 0LL;
    }
  }
  for ( i = (__int64 *)*((_QWORD *)v9 + 2); ; i = (__int64 *)*i )
  {
    if ( i == (__int64 *)((char *)v9 + 16) )
    {
      v34 = *((_DWORD *)v9 + 10);
      if ( v34 >= 0x4000 )
      {
        v35 = 16400;
      }
      else
      {
        v35 = v34 + 16;
        if ( v35 < 0x10 )
        {
          NewBlock = -2147024362;
          v31 = 501;
          v30 = -2147024362;
          goto LABEL_33;
        }
      }
      NewBlock = CDataStreamWriter::AllocateNewBlock(v9, v35);
      v30 = NewBlock;
      if ( (NewBlock & 0x80000000) == 0 )
        goto LABEL_4;
      v31 = 503;
LABEL_33:
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v30, v31, 0LL);
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, NewBlock, 0x17Cu, 0LL);
      v24 = 247LL;
      goto LABEL_22;
    }
    v26 = *((_DWORD *)i + 4);
    if ( v26 >= 0x10 )
      break;
  }
  v27 = *((_DWORD *)v9 + 10);
  if ( v27 + v26 < v27 )
  {
    NewBlock = -2147024362;
    *((_DWORD *)v9 + 10) = -1;
    v30 = -2147024362;
    v31 = 437;
    goto LABEL_33;
  }
  *((_DWORD *)v9 + 10) = v27 + v26;
  v28 = (CDataStreamWriter **)*((_QWORD *)v9 + 4);
  if ( v28 )
  {
    v29 = (CDataStreamWriter **)*((_QWORD *)v9 + 1);
    if ( *v29 != v9 )
      goto LABEL_31;
    *v28 = v9;
    v28[1] = (CDataStreamWriter *)v29;
    *v29 = (CDataStreamWriter *)v28;
    *((_QWORD *)v9 + 1) = v28;
  }
  v32 = (__int64 *)*i;
  if ( *(__int64 **)(*i + 8) != i || (v33 = (__int64 **)i[1], *v33 != i) )
LABEL_31:
    __fastfail(3u);
  *v33 = v32;
  v32[1] = (__int64)v33;
  *((_DWORD *)i + 5) = 0;
  *((_QWORD *)v9 + 4) = i;
LABEL_4:
  CDataStreamWriter::BeginItem(*v7);
  v11 = *((_QWORD *)this + 22);
  if ( !*(_QWORD *)(v11 + 48) && !*(_DWORD *)(v11 + 56)
    || (v12 = *(_QWORD *)(v11 + 32), v13 = *(_DWORD *)(v12 + 20), *(_DWORD *)(v12 + 16) - v13 < 0xC) )
  {
    v16 = -2147418113;
    v20 = 209;
    v18 = -2147418113;
LABEL_12:
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v18, v20, 0LL);
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v16, 0xB2u, 0LL);
    goto LABEL_15;
  }
  v14 = v13 + 12;
  v15 = -1;
  v16 = -2147024362;
  v17 = v13;
  if ( v13 + 12 >= v13 )
    v15 = v13 + 12;
  v18 = v14 < v13 ? 0x80070216 : 0;
  *(_DWORD *)(v12 + 20) = v15;
  if ( v14 < v13 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v18, 0x247u, 0LL);
    v16 = v18;
    if ( v18 >= 0 )
      goto LABEL_14;
LABEL_11:
    v20 = 216;
    goto LABEL_12;
  }
  v19 = *(_DWORD *)(v11 + 44);
  if ( v19 + 12 < v19 )
  {
    *(_DWORD *)(v11 + 44) = -1;
    v18 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024362, 0x248u, 0LL);
    goto LABEL_11;
  }
  *(_DWORD *)(v11 + 44) = v19 + 12;
LABEL_14:
  *(_DWORD *)(v11 + 56) += 12;
  *(_QWORD *)(v17 + v12 + 24) = v36;
  *(_DWORD *)(v17 + v12 + 32) = a3;
LABEL_15:
  CDataStreamWriter::EndItem(*((CDataStreamWriter **)this + 22));
LABEL_16:
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 80LL))(v3);
  return v8;
}
