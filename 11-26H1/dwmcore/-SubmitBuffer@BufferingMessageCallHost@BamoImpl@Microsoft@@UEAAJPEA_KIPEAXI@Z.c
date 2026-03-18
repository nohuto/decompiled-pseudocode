/*
 * XREFs of ?SubmitBuffer@BufferingMessageCallHost@BamoImpl@Microsoft@@UEAAJPEA_KIPEAXI@Z @ 0x180240D10
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1800E9260 (--2@YAPEAX_K@Z.c)
 *     ??$_Emplace_reallocate@AEBQEAVBamoPrincipalImpl@BamoImpl@Microsoft@@@?$vector@PEAVBamoPrincipalImpl@BamoImpl@Microsoft@@V?$allocator@PEAVBamoPrincipalImpl@BamoImpl@Microsoft@@@std@@@std@@AEAAPEAPEAVBamoPrincipalImpl@BamoImpl@Microsoft@@QEAPEAV234@AEBQEAV234@@Z @ 0x1800F9E7C (--$_Emplace_reallocate@AEBQEAVBamoPrincipalImpl@BamoImpl@Microsoft@@@-$vector@PEAVBamoPrincipalI.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1802014E4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?TryFindBufferStream@BufferingMessageCallHost@BamoImpl@Microsoft@@AEAA_N_KPEAPEAUBufferStream@23@@Z @ 0x180241230 (-TryFindBufferStream@BufferingMessageCallHost@BamoImpl@Microsoft@@AEAA_N_KPEAPEAUBufferStream@23.c)
 *     ?_Tidy@?$vector@UItemIdParameterIndex@BamoImpl@Microsoft@@V?$allocator@UItemIdParameterIndex@BamoImpl@Microsoft@@@std@@@std@@AEAAXXZ @ 0x1802412B4 (-_Tidy@-$vector@UItemIdParameterIndex@BamoImpl@Microsoft@@V-$allocator@UItemIdParameterIndex@Bam.c)
 */

__int64 __fastcall Microsoft::BamoImpl::BufferingMessageCallHost::SubmitBuffer(
        Microsoft::BamoImpl::BufferingMessageCallHost *this,
        unsigned __int64 *a2,
        __int64 a3,
        void *a4,
        unsigned int a5)
{
  unsigned __int64 v5; // r14
  unsigned __int64 v6; // rdx
  const char *v9; // r9
  struct Microsoft::BamoImpl::BufferStream *v10; // rdi
  _QWORD *v11; // rax
  _QWORD *v12; // rbx
  unsigned int v13; // ecx
  _QWORD *v14; // rsi
  _QWORD *v15; // r14
  _QWORD *v16; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct Microsoft::BamoImpl::BufferStream *v19; // [rsp+40h] [rbp+8h] BYREF

  v5 = a2[1];
  v6 = *a2;
  v19 = 0LL;
  Microsoft::BamoImpl::BufferingMessageCallHost::TryFindBufferStream(
    (Microsoft::BamoImpl::BufferingMessageCallHost *)((char *)this - 16),
    v6,
    &v19);
  v10 = v19;
  if ( !v19 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0xEE,
      (int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoBufferingMessageCallHost.inl",
      v9);
  v11 = operator new(0x38uLL);
  v12 = v11;
  if ( v11 )
  {
    v13 = a5;
    v11[3] = 0LL;
    v11[4] = 0LL;
    v11[5] = 0LL;
    *v11 = a4;
    v14 = (_QWORD *)((char *)this + 32);
    v11[2] = v5;
    v15 = v11 + 3;
    *((_DWORD *)v11 + 2) = v13;
    *((_BYTE *)v11 + 48) = 0;
    v19 = (struct Microsoft::BamoImpl::BufferStream *)v11;
    if ( v11 + 3 != (_QWORD *)((char *)this + 32) )
    {
      std::vector<Microsoft::BamoImpl::ItemIdParameterIndex>::_Tidy(v11 + 3);
      *v15 = *v14;
      v15[1] = *((_QWORD *)this + 5);
      v15[2] = *((_QWORD *)this + 6);
      *v14 = 0LL;
      *((_QWORD *)this + 5) = 0LL;
      *((_QWORD *)this + 6) = 0LL;
    }
    *((_BYTE *)v12 + 48) = *((_BYTE *)this + 56);
    *((_BYTE *)this + 56) = 0;
    v16 = (_QWORD *)*((_QWORD *)v10 + 1);
    if ( v16 == *((_QWORD **)v10 + 2) )
    {
      std::vector<Microsoft::BamoImpl::BamoPrincipalImpl *>::_Emplace_reallocate<Microsoft::BamoImpl::BamoPrincipalImpl * const &>(
        v10,
        (__int64)v16,
        (__int64 *)&v19);
    }
    else
    {
      *v16 = v12;
      *((_QWORD *)v10 + 1) += 8LL;
    }
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xF5,
      (int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoBufferingMessageCallHost.inl",
      (const char *)0x8007000ELL);
    return 2147942414LL;
  }
}
