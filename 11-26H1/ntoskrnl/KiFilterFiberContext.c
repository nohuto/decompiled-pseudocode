/*
 * XREFs of KiFilterFiberContext @ 0x140C86D10
 * Callers:
 *     KeInitAmd64SpecificState @ 0x140C86204 (KeInitAmd64SpecificState.c)
 * Callees:
 *     KeExpandKernelStackAndCallout @ 0x140263D70 (KeExpandKernelStackAndCallout.c)
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     ExNotifyCallback @ 0x140474150 (ExNotifyCallback.c)
 *     ExInitializeNPagedLookasideList @ 0x140492770 (ExInitializeNPagedLookasideList.c)
 *     KeKeepData @ 0x1404B6C04 (KeKeepData.c)
 *     KdDisableDebugger @ 0x1405E6340 (KdDisableDebugger.c)
 *     KdEnableDebugger @ 0x1405E6480 (KdEnableDebugger.c)
 *     ExCreateCallback @ 0x140AFD610 (ExCreateCallback.c)
 *     ExFreePool @ 0x140C16E30 (ExFreePool.c)
 *     KiSwInterruptPresent @ 0x140C86394 (KiSwInterruptPresent.c)
 */

_BOOL8 __fastcall KiFilterFiberContext(UNICODE_STRING *a1)
{
  NTSTATUS v2; // r12d
  unsigned __int64 v3; // rax
  __int64 v4; // rcx
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // rax
  __int64 v7; // rcx
  unsigned __int64 v8; // r9
  unsigned __int64 v9; // rax
  unsigned __int128 v10; // rax
  ULONG v11; // r15d
  NTSTATUS v12; // eax
  char v13; // r14
  unsigned __int64 v14; // rax
  __int64 v15; // rcx
  ULONG v16; // r8d
  unsigned __int64 v17; // rax
  __int64 v18; // rcx
  ULONG v19; // ecx
  NTSTATUS v20; // eax
  char v21; // cl
  int v22; // eax
  NTSTATUS v23; // eax
  char v24; // cl
  int v25; // ecx
  __int64 *v26; // rax
  __int64 v27; // rdx
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  PCALLBACK_OBJECT CallbackObject; // [rsp+A0h] [rbp+30h] BYREF

  v2 = KdDisableDebugger();
  KeKeepData();
  _disable();
  if ( !(_BYTE)KdDebuggerNotPresent )
  {
    while ( 1 )
      ;
  }
  _enable();
  v3 = __rdtsc();
  v4 = __ROR8__(v3, 3);
  v5 = ((0x7010008004002001LL * (v4 ^ v3)) ^ (((v4 ^ v3) * (unsigned __int128)0x7010008004002001uLL) >> 64)) % 0xA;
  if ( !*(_QWORD *)&MaxDataSize && !a1 && !__2f )
  {
    if ( PsIntegrityCheckEnabled )
    {
      ObjectAttributes.Length = 48;
      ObjectAttributes.ObjectName = (PUNICODE_STRING)L"TV";
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 64;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      if ( ExCreateCallback(&CallbackObject, &ObjectAttributes, 0, 0) >= 0 )
      {
        ExNotifyCallback(CallbackObject, sub_140544BB0, &__27);
        ObfDereferenceObject(CallbackObject);
        if ( __27 )
          __2f = 1;
        ExInitializeNPagedLookasideList(
          (PNPAGED_LOOKASIDE_LIST)&stru_140E0F440,
          0LL,
          0LL,
          0x200u,
          0xB38uLL,
          0x746E494Bu,
          0);
      }
    }
  }
  v6 = __rdtsc();
  v7 = __ROR8__(v6, 3);
  v8 = (0x7010008004002001LL * (v7 ^ v6)) ^ (((v7 ^ v6) * (unsigned __int128)0x7010008004002001uLL) >> 64);
  v9 = __rdtsc();
  LODWORD(ObjectAttributes.RootDirectory) = (v5 < 6) + 1;
  ObjectAttributes.ObjectName = a1;
  ObjectAttributes.Attributes = 1;
  *((_BYTE *)&ObjectAttributes.Attributes + 4) = 0;
  v10 = (__ROR8__(v9, 3) ^ v9) * (unsigned __int128)0x7010008004002001uLL;
  v11 = ((unsigned __int64)v10 ^ *((_QWORD *)&v10 + 1)) % 6;
  *(&ObjectAttributes.Length + 1) = v11;
  ObjectAttributes.Length = v8 % 0xD;
  v12 = KeExpandKernelStackAndCallout(sub_140CAE390, &ObjectAttributes, 0xC000uLL);
  v13 = *((_BYTE *)&ObjectAttributes.Attributes + 4);
  if ( v12 < 0 )
    v13 = 0;
  *((_BYTE *)&ObjectAttributes.Attributes + 4) = v13;
  if ( v13 )
  {
    if ( v5 >= 6 )
      goto LABEL_21;
    v14 = __rdtsc();
    v15 = __ROR8__(v14, 3);
    v16 = ((0x7010008004002001LL * (v15 ^ v14)) ^ (((v15 ^ v14) * (unsigned __int128)0x7010008004002001uLL) >> 64))
        % 0xD;
    do
    {
      v17 = __rdtsc();
      v18 = __ROR8__(v17, 3);
      v19 = ((0x7010008004002001LL * (v18 ^ v17)) ^ (((v18 ^ v17) * (unsigned __int128)0x7010008004002001uLL) >> 64))
          % 6;
    }
    while ( v11 && v19 == v11 );
    ObjectAttributes.Length = v16;
    *(&ObjectAttributes.Length + 1) = v19;
    LODWORD(ObjectAttributes.RootDirectory) = (v5 < 6) + 1;
    ObjectAttributes.ObjectName = a1;
    ObjectAttributes.Attributes = 0;
    *((_BYTE *)&ObjectAttributes.Attributes + 4) = 0;
    v20 = KeExpandKernelStackAndCallout(sub_140CAE390, &ObjectAttributes, 0xC000uLL);
    v21 = *((_BYTE *)&ObjectAttributes.Attributes + 4);
    if ( v20 < 0 )
      v21 = 0;
    *((_BYTE *)&ObjectAttributes.Attributes + 4) = v21;
    v13 = v21;
    if ( v21 )
    {
LABEL_21:
      if ( *(_QWORD *)&MaxDataSize )
        goto LABEL_28;
      if ( a1 )
        goto LABEL_36;
      if ( (int)KiSwInterruptPresent() < 0 && !__2f )
      {
LABEL_29:
        if ( qword_140FFC7E0 )
          ExFreePool(qword_140FFC7E0);
        v25 = 24;
        v26 = &__28;
        v27 = 3LL;
        do
        {
          *v26 = 0LL;
          v25 -= 8;
          ++v26;
          --v27;
        }
        while ( v27 );
        for ( ; v25; --v25 )
        {
          *(_BYTE *)v26 = 0;
          v26 = (__int64 *)((char *)v26 + 1);
        }
        __31 = 0;
        __29 = 0;
        __2a = 0LL;
        dword_140E0F380 = 0;
        qword_140FFC080 = 0LL;
        goto LABEL_36;
      }
      ObjectAttributes.Length = 0;
      *(&ObjectAttributes.Length + 1) = 7;
      LODWORD(ObjectAttributes.RootDirectory) = 1;
      ObjectAttributes.ObjectName = 0LL;
      v22 = KiSwInterruptPresent();
      *((_BYTE *)&ObjectAttributes.Attributes + 4) = 0;
      ObjectAttributes.Attributes = (v22 >> 31) & 8;
      v23 = KeExpandKernelStackAndCallout(sub_140CAE390, &ObjectAttributes, 0xC000uLL);
      v24 = *((_BYTE *)&ObjectAttributes.Attributes + 4);
      if ( v23 < 0 )
        v24 = 0;
      *((_BYTE *)&ObjectAttributes.Attributes + 4) = v24;
      v13 = v24;
      if ( v24 )
      {
LABEL_28:
        if ( a1 )
          goto LABEL_36;
        goto LABEL_29;
      }
    }
  }
LABEL_36:
  _disable();
  if ( !(_BYTE)KdDebuggerNotPresent )
  {
    while ( 1 )
      ;
  }
  _enable();
  _disable();
  _enable();
  if ( v2 >= 0 )
    KdEnableDebugger();
  return v13 != 0;
}
