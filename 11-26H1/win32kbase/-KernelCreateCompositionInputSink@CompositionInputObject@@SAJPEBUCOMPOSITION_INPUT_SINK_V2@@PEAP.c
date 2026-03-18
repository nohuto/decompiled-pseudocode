/*
 * XREFs of ?KernelCreateCompositionInputSink@CompositionInputObject@@SAJPEBUCOMPOSITION_INPUT_SINK_V2@@PEAPEAX@Z @ 0x140058A80
 * Callers:
 *     ?_CreateCompositionInputSink@@YAJPEBUCOMPOSITION_INPUT_SINK@@HPEAPEAX@Z @ 0x1400597AC (-_CreateCompositionInputSink@@YAJPEBUCOMPOSITION_INPUT_SINK@@HPEAPEAX@Z.c)
 *     ?RedirectMouseToHwnd@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEAUHWND__@@PEBUtagMsgRoutingInfo@@KK@Z @ 0x140145750 (-RedirectMouseToHwnd@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEAUHWND.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     UserAllocDefaultCompositionSecurityDescriptor @ 0x140043A00 (UserAllocDefaultCompositionSecurityDescriptor.c)
 *     W32GetCurrentWin32kSessionId @ 0x1400584BC (W32GetCurrentWin32kSessionId.c)
 *     ?ValidateInputSink@CompositionInputObject@@SAJAEBUCOMPOSITION_INPUT_SINK_V2@@@Z @ 0x140058D78 (-ValidateInputSink@CompositionInputObject@@SAJAEBUCOMPOSITION_INPUT_SINK_V2@@@Z.c)
 *     ?Create@InputSink@InputTraceLogging@@SAXPEAXPEBUCOMPOSITION_INPUT_SINK_V2@@@Z @ 0x140058EB4 (-Create@InputSink@InputTraceLogging@@SAXPEAXPEBUCOMPOSITION_INPUT_SINK_V2@@@Z.c)
 *     ?ObjectInit@CompositionInputObject@@KAJPEAUCompositionObject@@PEAXPEAPEAVICompositionObject@@@Z @ 0x1400592F0 (-ObjectInit@CompositionInputObject@@KAJPEAUCompositionObject@@PEAXPEAPEAVICompositionObject@@@Z.c)
 *     UserIsCurrentProcessDwm @ 0x14006F430 (UserIsCurrentProcessDwm.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 */

__int64 __fastcall CompositionInputObject::KernelCreateCompositionInputSink(
        const struct COMPOSITION_INPUT_SINK_V2 *a1,
        void **a2)
{
  __int64 v2; // rsi
  _OWORD *v4; // r8
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
  int IsCurrentProcessDwm; // eax
  ACCESS_MASK v18; // r14d
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  char *v23; // rdi
  __int64 v24; // r9
  _OWORD *v25; // rcx
  _OWORD *v26; // rax
  __int128 v27; // xmm1
  __int128 v28; // xmm0
  __int128 v29; // xmm1
  __int128 v30; // xmm0
  __int128 v31; // xmm1
  __int128 v32; // xmm0
  __int128 v33; // xmm1
  __int128 v34; // xmm0
  __int128 v35; // xmm1
  __int64 v36; // rax
  __int64 v37; // rcx
  int CurrentWin32kSessionId; // eax
  NTSTATUS LocallyUniqueId; // eax
  PVOID v40; // rcx
  int v41; // eax
  HANDLE v42; // rcx
  PVOID Object; // [rsp+50h] [rbp-B0h] BYREF
  HANDLE Handle; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD v46[6]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v47[304]; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v48[304]; // [rsp+1C0h] [rbp+C0h] BYREF

  v2 = 2LL;
  Handle = (HANDLE)-1LL;
  v4 = v48;
  v5 = 2LL;
  do
  {
    v6 = *((_OWORD *)a1 + 1);
    *v4 = *(_OWORD *)a1;
    v7 = *((_OWORD *)a1 + 2);
    v4[1] = v6;
    v8 = *((_OWORD *)a1 + 3);
    v4[2] = v7;
    v9 = *((_OWORD *)a1 + 4);
    v4[3] = v8;
    v10 = *((_OWORD *)a1 + 5);
    v4[4] = v9;
    v11 = *((_OWORD *)a1 + 6);
    v4[5] = v10;
    v12 = *((_OWORD *)a1 + 7);
    a1 = (const struct COMPOSITION_INPUT_SINK_V2 *)((char *)a1 + 128);
    v4[6] = v11;
    v4 += 8;
    *(v4 - 1) = v12;
    --v5;
  }
  while ( v5 );
  v13 = *(_OWORD *)a1;
  v14 = *((_QWORD *)a1 + 4);
  v15 = *((_OWORD *)a1 + 1);
  Object = 0LL;
  *v4 = v13;
  v4[1] = v15;
  *((_QWORD *)v4 + 4) = v14;
  inserted = CompositionInputObject::ValidateInputSink((const struct COMPOSITION_INPUT_SINK_V2 *)v48);
  IsCurrentProcessDwm = UserIsCurrentProcessDwm();
  v18 = IsCurrentProcessDwm != 0 ? 3 : -1073741824;
  if ( inserted < 0 )
    goto LABEL_18;
  v19 = UserAllocDefaultCompositionSecurityDescriptor(
          IsCurrentProcessDwm == 0 ? 0xC0000000 : 0,
          (struct _ACL **)&Object);
  v23 = (char *)Object;
  inserted = v19;
  if ( v19 >= 0 )
  {
    v46[0] = 48LL;
    memset(&v46[1], 0, 24);
    v46[4] = Object;
    v46[5] = 0LL;
    KeEnterCriticalRegion();
    v25 = v47;
    v26 = v48;
    do
    {
      v27 = v26[1];
      *v25 = *v26;
      v28 = v26[2];
      v25[1] = v27;
      v29 = v26[3];
      v25[2] = v28;
      v30 = v26[4];
      v25[3] = v29;
      v31 = v26[5];
      v25[4] = v30;
      v32 = v26[6];
      v25[5] = v31;
      v33 = v26[7];
      v26 += 8;
      v25[6] = v32;
      v25 += 8;
      *(v25 - 1) = v33;
      --v2;
    }
    while ( v2 );
    v34 = *v26;
    LOBYTE(v24) = 1;
    v35 = v26[1];
    v36 = *((_QWORD *)v26 + 4);
    *v25 = v34;
    Object = 0LL;
    v25[1] = v35;
    *((_QWORD *)v25 + 4) = v36;
    inserted = ObCreateObject(0LL, ExCompositionObjectType, v46, v24, 0LL, 192, 0, 0, &Object);
    if ( inserted >= 0 )
    {
      CurrentWin32kSessionId = W32GetCurrentWin32kSessionId(v37);
      *(_DWORD *)Object = CurrentWin32kSessionId;
      LocallyUniqueId = ZwAllocateLocallyUniqueId((PLUID)Object + 2);
      v40 = Object;
      inserted = LocallyUniqueId;
      if ( LocallyUniqueId < 0
        || (v41 = CompositionInputObject::ObjectInit(
                    (struct CompositionObject *)Object,
                    v47,
                    (struct ICompositionObject **)Object + 1),
            v40 = Object,
            inserted = v41,
            v41 < 0) )
      {
        ObfDereferenceObject(v40);
      }
      else
      {
        inserted = ObInsertObject(Object, 0LL, v18, 0, 0LL, &Handle);
      }
    }
    KeLeaveCriticalRegion();
    if ( inserted >= 0 )
    {
      v42 = Handle;
      *a2 = Handle;
      InputTraceLogging::InputSink::Create(v42, (const struct COMPOSITION_INPUT_SINK_V2 *)v48);
    }
  }
  if ( v23 )
    GreDeleteFastMutex(v23, v20, v21, v22);
  if ( inserted < 0 )
  {
LABEL_18:
    if ( Handle != (HANDLE)-1LL )
      NtClose(Handle);
  }
  return (unsigned int)inserted;
}
