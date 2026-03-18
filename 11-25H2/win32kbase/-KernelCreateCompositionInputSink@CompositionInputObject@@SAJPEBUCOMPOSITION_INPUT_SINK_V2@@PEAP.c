/*
 * XREFs of ?KernelCreateCompositionInputSink@CompositionInputObject@@SAJPEBUCOMPOSITION_INPUT_SINK_V2@@PEAPEAX@Z @ 0x14009B614
 * Callers:
 *     ?RedirectMouseToHwnd@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEAUHWND__@@PEBUtagMsgRoutingInfo@@KK@Z @ 0x1401007CC (-RedirectMouseToHwnd@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEAUHWND.c)
 *     ?_CreateCompositionInputSink@@YAJPEBUCOMPOSITION_INPUT_SINK@@HPEAPEAX@Z @ 0x140116D7C (-_CreateCompositionInputSink@@YAJPEBUCOMPOSITION_INPUT_SINK@@HPEAPEAX@Z.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     UserAllocDefaultCompositionSecurityDescriptor @ 0x1400492B0 (UserAllocDefaultCompositionSecurityDescriptor.c)
 *     W32GetCurrentWin32kSessionId @ 0x140049A34 (W32GetCurrentWin32kSessionId.c)
 *     UserIsCurrentProcessDwm @ 0x14004E260 (UserIsCurrentProcessDwm.c)
 *     ?ValidateInputSink@CompositionInputObject@@SAJAEBUCOMPOSITION_INPUT_SINK_V2@@@Z @ 0x14009B908 (-ValidateInputSink@CompositionInputObject@@SAJAEBUCOMPOSITION_INPUT_SINK_V2@@@Z.c)
 *     ?Create@InputSink@InputTraceLogging@@SAXPEAXPEBUCOMPOSITION_INPUT_SINK_V2@@@Z @ 0x14009B9D4 (-Create@InputSink@InputTraceLogging@@SAXPEAXPEBUCOMPOSITION_INPUT_SINK_V2@@@Z.c)
 *     ?ObjectInit@CompositionInputObject@@KAJPEAUCompositionObject@@PEAXPEAPEAVICompositionObject@@@Z @ 0x14009BE0C (-ObjectInit@CompositionInputObject@@KAJPEAUCompositionObject@@PEAXPEAPEAVICompositionObject@@@Z.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 */

__int64 __fastcall CompositionInputObject::KernelCreateCompositionInputSink(
        const struct COMPOSITION_INPUT_SINK_V2 *a1,
        void **a2)
{
  _OWORD *v2; // r8
  __int64 v3; // rsi
  __int64 v5; // rax
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int64 v14; // rax
  __int128 v15; // xmm1
  NTSTATUS inserted; // ebx
  __int64 v17; // rdx
  __int64 v18; // rcx
  BOOL IsCurrentProcessDwm; // eax
  ACCESS_MASK v20; // r14d
  int v21; // eax
  char *v22; // rdi
  __int64 v23; // r9
  _OWORD *v24; // rcx
  _OWORD *v25; // rax
  __int128 v26; // xmm1
  __int128 v27; // xmm0
  __int128 v28; // xmm1
  __int128 v29; // xmm0
  __int128 v30; // xmm1
  __int128 v31; // xmm0
  __int128 v32; // xmm1
  __int128 v33; // xmm0
  __int128 v34; // xmm1
  __int64 v35; // rax
  NTSTATUS LocallyUniqueId; // eax
  PVOID v37; // rcx
  int v38; // eax
  HANDLE v39; // rcx
  PVOID Object; // [rsp+50h] [rbp-B0h] BYREF
  HANDLE Handle; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD v43[6]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v44[304]; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v45[304]; // [rsp+1C0h] [rbp+C0h] BYREF

  Handle = (HANDLE)-1LL;
  v2 = v45;
  v3 = 2LL;
  v5 = 2LL;
  do
  {
    v6 = *((_OWORD *)a1 + 1);
    *v2 = *(_OWORD *)a1;
    v7 = *((_OWORD *)a1 + 2);
    v2[1] = v6;
    v8 = *((_OWORD *)a1 + 3);
    v2[2] = v7;
    v9 = *((_OWORD *)a1 + 4);
    v2[3] = v8;
    v10 = *((_OWORD *)a1 + 5);
    v2[4] = v9;
    v11 = *((_OWORD *)a1 + 6);
    v2[5] = v10;
    v12 = *((_OWORD *)a1 + 7);
    a1 = (const struct COMPOSITION_INPUT_SINK_V2 *)((char *)a1 + 128);
    v2[6] = v11;
    v2 += 8;
    *(v2 - 1) = v12;
    --v5;
  }
  while ( v5 );
  v13 = *(_OWORD *)a1;
  v14 = *((_QWORD *)a1 + 4);
  v15 = *((_OWORD *)a1 + 1);
  Object = 0LL;
  *v2 = v13;
  v2[1] = v15;
  *((_QWORD *)v2 + 4) = v14;
  inserted = CompositionInputObject::ValidateInputSink((const struct COMPOSITION_INPUT_SINK_V2 *)v45);
  IsCurrentProcessDwm = UserIsCurrentProcessDwm(v18, v17);
  v20 = IsCurrentProcessDwm ? 3 : -1073741824;
  if ( inserted < 0 )
    goto LABEL_18;
  v21 = UserAllocDefaultCompositionSecurityDescriptor(!IsCurrentProcessDwm ? 0xC0000000 : 0, (__int64 *)&Object);
  v22 = (char *)Object;
  inserted = v21;
  if ( v21 >= 0 )
  {
    v43[0] = 48LL;
    memset(&v43[1], 0, 24);
    v43[4] = Object;
    v43[5] = 0LL;
    KeEnterCriticalRegion();
    v24 = v44;
    v25 = v45;
    do
    {
      v26 = v25[1];
      *v24 = *v25;
      v27 = v25[2];
      v24[1] = v26;
      v28 = v25[3];
      v24[2] = v27;
      v29 = v25[4];
      v24[3] = v28;
      v30 = v25[5];
      v24[4] = v29;
      v31 = v25[6];
      v24[5] = v30;
      v32 = v25[7];
      v25 += 8;
      v24[6] = v31;
      v24 += 8;
      *(v24 - 1) = v32;
      --v3;
    }
    while ( v3 );
    v33 = *v25;
    LOBYTE(v23) = 1;
    v34 = v25[1];
    v35 = *((_QWORD *)v25 + 4);
    *v24 = v33;
    Object = 0LL;
    v24[1] = v34;
    *((_QWORD *)v24 + 4) = v35;
    inserted = ObCreateObject(0LL, ExCompositionObjectType, v43, v23, 0LL, 192, 0, 0, &Object);
    if ( inserted >= 0 )
    {
      *(_DWORD *)Object = W32GetCurrentWin32kSessionId();
      LocallyUniqueId = ZwAllocateLocallyUniqueId((PLUID)Object + 2);
      v37 = Object;
      inserted = LocallyUniqueId;
      if ( LocallyUniqueId < 0
        || (v38 = CompositionInputObject::ObjectInit(
                    (struct CompositionObject *)Object,
                    v44,
                    (struct ICompositionObject **)Object + 1),
            v37 = Object,
            inserted = v38,
            v38 < 0) )
      {
        ObfDereferenceObject(v37);
      }
      else
      {
        inserted = ObInsertObject(Object, 0LL, v20, 0, 0LL, &Handle);
      }
    }
    KeLeaveCriticalRegion();
    if ( inserted >= 0 )
    {
      v39 = Handle;
      *a2 = Handle;
      InputTraceLogging::InputSink::Create(v39, (const struct COMPOSITION_INPUT_SINK_V2 *)v45);
    }
  }
  if ( v22 )
    GreDeleteFastMutex(v22);
  if ( inserted < 0 )
  {
LABEL_18:
    if ( Handle != (HANDLE)-1LL )
      NtClose(Handle);
  }
  return (unsigned int)inserted;
}
