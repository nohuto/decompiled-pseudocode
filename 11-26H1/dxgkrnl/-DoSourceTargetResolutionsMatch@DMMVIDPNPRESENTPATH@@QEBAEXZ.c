/*
 * XREFs of ?DoSourceTargetResolutionsMatch@DMMVIDPNPRESENTPATH@@QEBAEXZ @ 0x14002C444
 * Callers:
 *     ?IsValidContentScaling@DMMVIDPNPRESENTPATH@@QEBAEXZ @ 0x14002C9E0 (-IsValidContentScaling@DMMVIDPNPRESENTPATH@@QEBAEXZ.c)
 *     BmlPinPathContentScaling @ 0x1402D9D38 (BmlPinPathContentScaling.c)
 *     ?UpdatePathSupportInfo@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x140387630 (-UpdatePathSupportInfo@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@PE.c)
 * Callees:
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x14002C340 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?IsDriverSupportPathIndependentRotation@DMMVIDPNPRESENTPATH@@QEBAEXZ @ 0x1403BD464 (-IsDriverSupportPathIndependentRotation@DMMVIDPNPRESENTPATH@@QEBAEXZ.c)
 */

char __fastcall DMMVIDPNPRESENTPATH::DoSourceTargetResolutionsMatch(DMMVIDPNPRESENTPATH *this)
{
  char v2; // bl
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rbp
  __int64 v6; // rsi
  __int64 v7; // rax
  __int64 v8; // rsi
  __int64 v9; // rdi
  int v10; // ecx
  int v11; // ecx
  int v12; // eax
  __int64 v14; // [rsp+30h] [rbp+8h]

  v2 = 1;
  v3 = *((_QWORD *)this + 11);
  v4 = *(_QWORD *)(v3 + 104);
  if ( v4 )
  {
    _InterlockedAdd((volatile signed __int32 *)(v4 + 96), 1u);
    v5 = *(_QWORD *)(v3 + 104);
  }
  else
  {
    v5 = 0LL;
  }
  v6 = *((_QWORD *)this + 12);
  v7 = *(_QWORD *)(v6 + 104);
  if ( v7 )
  {
    _InterlockedAdd((volatile signed __int32 *)(v7 + 96), 1u);
    v8 = *(_QWORD *)(v6 + 104);
  }
  else
  {
    v8 = 0LL;
  }
  v9 = *(_QWORD *)(v8 + 144);
  v14 = *(_QWORD *)(*(_QWORD *)(v5 + 144) + 76LL);
  v10 = *((_DWORD *)this + 29);
  if ( (unsigned int)(v10 - 1) <= 0xF )
    v10 = (v10 - 1) / 4 + 1;
  if ( ((v10 - 2) & 0xFFFFFFFD) != 0 )
  {
    if ( v10 == 254 && DMMVIDPNPRESENTPATH::IsDriverSupportPathIndependentRotation(this) )
    {
      v11 = v14;
      v12 = HIDWORD(v14);
      if ( v14 == *(_QWORD *)(v9 + 84) )
        goto LABEL_13;
    }
    else
    {
      v11 = HIDWORD(v14);
      v12 = v14;
    }
  }
  else
  {
    v11 = *(_QWORD *)(*(_QWORD *)(v5 + 144) + 76LL);
    v12 = HIDWORD(*(_QWORD *)(*(_QWORD *)(v5 + 144) + 76LL));
  }
  if ( v12 != *(_DWORD *)(v9 + 84) || v11 != *(_DWORD *)(v9 + 88) )
    v2 = 0;
LABEL_13:
  ReferenceCounted::Release((ReferenceCounted *)(v8 + 88));
  ReferenceCounted::Release((ReferenceCounted *)(v5 + 88));
  return v2;
}
