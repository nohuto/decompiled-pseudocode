/*
 * XREFs of ?ndisCreateAdapterInstanceName@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAPEAU_UNICODE_STRING@@1@Z @ 0x14016C590
 * Callers:
 *     ?ndisAddDevice@@_Y2PAGENPNP@@AJPEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAPEAX@Z @ 0x14017AAB0 (-ndisAddDevice@@_Y2PAGENPNP@@AJPEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAPEAX@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x14000FFE0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_q @ 0x140016160 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qD @ 0x140016250 (WPP_RECORDER_SF_qD.c)
 *     WPP_RECORDER_SF_qql @ 0x140023560 (WPP_RECORDER_SF_qql_ea_140023560.c)
 *     ??$ReadNoFence@KX@mem@@YAKPEDK@Z @ 0x140051E50 (--$ReadNoFence@KX@mem@@YAKPEDK@Z.c)
 *     WPP_RECORDER_SF_Z @ 0x140056EF0 (WPP_RECORDER_SF_Z.c)
 *     WdmlibRtlInitUnicodeStringEx @ 0x1400743C0 (WdmlibRtlInitUnicodeStringEx.c)
 *     ??$out_param@V?$unique_ptr@U_UNICODE_STRING@@U?$KFreePool@U_UNICODE_STRING@@@@@wistd@@@wil@@YA?AU?$out_param_t@V?$unique_ptr@U_UNICODE_STRING@@U?$KFreePool@U_UNICODE_STRING@@@@@wistd@@@details@0@AEAV?$unique_ptr@U_UNICODE_STRING@@U?$KFreePool@U_UNICODE_STRING@@@@@wistd@@@Z @ 0x140076DB0 (--$out_param@V-$unique_ptr@U_UNICODE_STRING@@U-$KFreePool@U_UNICODE_STRING@@@@@wistd@@@wil@@YA-A.c)
 *     ??$attach_to_smart_pointer@V?$unique_ptr@U_UNICODE_STRING@@U?$KFreePool@U_UNICODE_STRING@@@@@wistd@@X@wil@@YAXAEAV?$unique_ptr@U_UNICODE_STRING@@U?$KFreePool@U_UNICODE_STRING@@@@@wistd@@PEAU_UNICODE_STRING@@@Z @ 0x14008C0C0 (--$attach_to_smart_pointer@V-$unique_ptr@U_UNICODE_STRING@@U-$KFreePool@U_UNICODE_STRING@@@@@wis.c)
 *     __security_check_cookie @ 0x1400EA060 (__security_check_cookie.c)
 *     memmove @ 0x1400EA1C0 (memmove.c)
 *     KRegKey::QueryValueBlob__lambda_f1f475d4aaff1d18d6eae9fe5eca1b95___ @ 0x140138C9C (KRegKey--QueryValueBlob__lambda_f1f475d4aaff1d18d6eae9fe5eca1b95___.c)
 *     ndisIfOpenInterfaceRegistryKey @ 0x14015F120 (ndisIfOpenInterfaceRegistryKey.c)
 *     ndisMiniportQueryDeviceProperty @ 0x140167FF0 (ndisMiniportQueryDeviceProperty.c)
 *     ?DuplicateUnicodeString@Rtl@@YA?AV?$unique_ptr@U_UNICODE_STRING@@U?$KFreePool@U_UNICODE_STRING@@@@@wistd@@AEBU_UNICODE_STRING@@K@Z @ 0x14016ABE0 (-DuplicateUnicodeString@Rtl@@YA-AV-$unique_ptr@U_UNICODE_STRING@@U-$KFreePool@U_UNICODE_STRING@@.c)
 */

__int64 __fastcall ndisCreateAdapterInstanceName(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _UNICODE_STRING **a2,
        struct _UNICODE_STRING **a3)
{
  HANDLE v3; // rbx
  struct _UNICODE_STRING **v4; // r12
  struct _UNICODE_STRING **v5; // r14
  unsigned int *v7; // rcx
  __int64 v8; // r15
  _DEVICE_OBJECT *PhysicalDeviceObject; // rdi
  int DeviceProperty; // esi
  unsigned __int64 v11; // rdx
  _UNICODE_STRING *Pool2; // rax
  _UNICODE_STRING *v13; // rbx
  ULONG v14; // r8d
  NTSTATUS inited; // eax
  unsigned __int16 v16; // r9
  bool v17; // sf
  __int64 v18; // rax
  __int64 v19; // r12
  int v20; // eax
  wchar_t *v21; // rax
  __int64 v22; // r14
  __int64 v23; // rcx
  int v24; // r15d
  HANDLE v25; // rdi
  NTSTATUS v26; // eax
  _DWORD *v27; // rcx
  wchar_t *Buffer; // r12
  _WORD *v29; // rax
  unsigned __int16 MaximumLength; // r14
  _QWORD *PoolWithTag; // rsi
  __int16 v32; // ax
  PVOID v33; // rcx
  int v34; // edx
  PVOID v35; // rcx
  PVOID v36; // rcx
  PVOID v37; // rcx
  struct _UNICODE_STRING *v38; // rcx
  const void **v39; // rdi
  unsigned __int64 v40; // rax
  unsigned __int64 v41; // rdx
  __int64 v42; // rax
  unsigned __int16 *v43; // rbx
  char v44; // r10
  unsigned __int16 v45; // r8
  unsigned __int64 v46; // r9
  __int64 v47; // rdx
  wchar_t *v48; // rax
  struct _UNICODE_STRING *v49; // rax
  PULONG ResultLength; // [rsp+20h] [rbp-E0h]
  char v52[8]; // [rsp+28h] [rbp-D8h]
  char v53[8]; // [rsp+30h] [rbp-D0h]
  ULONG BufferLength[2]; // [rsp+80h] [rbp-80h] BYREF
  PVOID P; // [rsp+88h] [rbp-78h] BYREF
  PVOID v56; // [rsp+90h] [rbp-70h] BYREF
  struct _UNICODE_STRING **v57; // [rsp+98h] [rbp-68h]
  HANDLE KeyHandle; // [rsp+A0h] [rbp-60h] BYREF
  _UNICODE_STRING v59; // [rsp+A8h] [rbp-58h] BYREF
  char v60; // [rsp+B8h] [rbp-48h]
  __int64 v61; // [rsp+C0h] [rbp-40h] BYREF
  struct _UNICODE_STRING **v62; // [rsp+C8h] [rbp-38h]
  __int64 v63; // [rsp+D0h] [rbp-30h] BYREF
  char v64; // [rsp+E0h] [rbp-20h]
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+E8h] [rbp-18h] BYREF
  wchar_t Dst[48]; // [rsp+120h] [rbp+20h] BYREF

  v3 = 0LL;
  v62 = a3;
  *a2 = 0LL;
  v4 = a3;
  *a3 = 0LL;
  v5 = a2;
  v57 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      13,
      30,
      (struct _GUID *)&WPP_901e3e1acd0b36a9ab86c452924f7c21_Traceguids,
      (char)a1);
  }
  v56 = 0LL;
  if ( (mem::ReadNoFence<unsigned long,void>(&a1->Flags) & 0x80u) != 0LL
    || (mem::ReadNoFence<unsigned long,void>(v7) & 0x100) != 0 )
  {
    v61 = wil::out_param<wistd::unique_ptr<_UNICODE_STRING,KFreePool<_UNICODE_STRING>>>((__int64)&v63, (__int64)&v56);
    *(_QWORD *)BufferLength = 0LL;
    v19 = v61;
    v20 = ndisIfOpenInterfaceRegistryKey((__int64)&a1->InterfaceGuid, (KRegKey *)BufferLength, 1u, 1);
    DeviceProperty = v20;
    if ( v20 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qD(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          2u,
          0xDu,
          0x1Bu,
          (struct _GUID *)&WPP_901e3e1acd0b36a9ab86c452924f7c21_Traceguids,
          (char)a1,
          v20);
      if ( *(_QWORD *)BufferLength )
        ZwClose(*(HANDLE *)BufferLength);
LABEL_95:
      if ( v64 )
        wil::attach_to_smart_pointer<wistd::unique_ptr<_UNICODE_STRING,KFreePool<_UNICODE_STRING>>,void>();
      v4 = v62;
      goto LABEL_98;
    }
    *(_DWORD *)v52 = 18368;
    LODWORD(ResultLength) = 22819;
    P = 0LL;
    KeyHandle = 0LL;
    swprintf_s(
      Dst,
      0x2DuLL,
      L"{%08x-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x}\\%04x",
      2702307828LL,
      ResultLength,
      *(_QWORD *)v52,
      154,
      104,
      208,
      186,
      251,
      87,
      121,
      1,
      18);
    v21 = Dst;
    v22 = 0x7FFFLL;
    v59 = 0LL;
    v23 = 0x7FFFLL;
    do
    {
      if ( !*v21 )
        break;
      ++v21;
      --v23;
    }
    while ( v23 );
    v24 = -1073741811;
    DeviceProperty = -1073741811;
    if ( v23 )
    {
      DeviceProperty = 0;
      v59.Length = -2 - 2 * v23;
      v59.MaximumLength = -2 * v23;
      v59.Buffer = Dst;
    }
    v25 = *(HANDLE *)BufferLength;
    if ( DeviceProperty >= 0 )
    {
      KeyHandle = 0LL;
      ObjectAttributes.ObjectName = &v59;
      *(_QWORD *)&ObjectAttributes.Length = 48LL;
      *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
      ObjectAttributes.RootDirectory = *(HANDLE *)BufferLength;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v26 = ZwOpenKey(&KeyHandle, 1u, &ObjectAttributes);
      v3 = KeyHandle;
      DeviceProperty = v26;
    }
    if ( DeviceProperty == -1073741772 )
    {
      v27 = &unk_1400F7FA0;
      while ( v27[4] != 18
           || *(_QWORD *)v27 != NETSETUPPKEY_Interface_IfDescr
           || *((_QWORD *)v27 + 1) != 0x17957FBBAD0689ALL )
      {
        v27 += 5;
        if ( v27 == (_DWORD *)&unk_1400F87FC )
          goto LABEL_78;
      }
      Buffer = (wchar_t *)&unk_1400F7E38;
      v59 = 0LL;
      v29 = &unk_1400F7E38;
      do
      {
        if ( !*v29 )
          break;
        ++v29;
        --v22;
      }
      while ( v22 );
      if ( v22 )
      {
        v24 = 0;
        BufferLength[0] = (unsigned __int16)(-2 - 2 * v22);
        MaximumLength = -2 * v22;
      }
      else
      {
        Buffer = v59.Buffer;
        MaximumLength = v59.MaximumLength;
        BufferLength[0] = v59.Length;
      }
      if ( v24 >= 0 && (PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, MaximumLength + 16LL, 0x7274534Bu)) != 0LL )
      {
        v32 = BufferLength[0];
        PoolWithTag[1] = PoolWithTag + 2;
        *(_WORD *)PoolWithTag = v32;
        *((_WORD *)PoolWithTag + 1) = MaximumLength;
        memmove(PoolWithTag + 2, Buffer, MaximumLength);
      }
      else
      {
        PoolWithTag = 0LL;
      }
      v33 = P;
      P = PoolWithTag;
      if ( v33 )
        ExFreePoolWithTag(v33, 0x7274534Bu);
      if ( !P )
      {
        if ( v3 )
          ZwClose(v3);
        DeviceProperty = -1073741670;
        goto LABEL_83;
      }
      if ( v3 )
        ZwClose(v3);
      v19 = v61;
    }
    else
    {
      if ( DeviceProperty )
      {
LABEL_78:
        if ( v3 )
          ZwClose(v3);
LABEL_83:
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          *(_DWORD *)v53 = DeviceProperty;
          WPP_RECORDER_SF_qD(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            2u,
            0xDu,
            0x1Cu,
            (struct _GUID *)&WPP_901e3e1acd0b36a9ab86c452924f7c21_Traceguids,
            (char)a1,
            *(_QWORD *)v53);
        }
        v36 = P;
        P = 0LL;
        if ( v36 )
          ExFreePoolWithTag(v36, 0x7274534Bu);
        if ( v25 )
          ZwClose(v25);
        v5 = v57;
        goto LABEL_95;
      }
      v59 = 0LL;
      DeviceProperty = KRegKey::QueryValueBlob__lambda_f1f475d4aaff1d18d6eae9fe5eca1b95___(&KeyHandle, &v59, &P);
      if ( KeyHandle )
        ZwClose(KeyHandle);
      if ( DeviceProperty )
        goto LABEL_83;
    }
    Rtl::DuplicateUnicodeString(&v61, (const void **)P, 0x6E61444Eu);
    if ( v61 )
    {
      v37 = P;
      *(_QWORD *)(v19 + 8) = v61;
      P = 0LL;
      if ( v37 )
        ExFreePoolWithTag(v37, 0x7274534Bu);
      if ( v25 )
        ZwClose(v25);
      v5 = v57;
      DeviceProperty = 0;
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v34) = 2;
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v34,
          13,
          29,
          (struct _GUID *)&WPP_901e3e1acd0b36a9ab86c452924f7c21_Traceguids,
          (char)a1);
      }
      v35 = P;
      P = 0LL;
      if ( v35 )
        ExFreePoolWithTag(v35, 0x7274534Bu);
      if ( v25 )
        ZwClose(v25);
      v5 = v57;
      DeviceProperty = -1073741670;
    }
    goto LABEL_95;
  }
  v8 = wil::out_param<wistd::unique_ptr<_UNICODE_STRING,KFreePool<_UNICODE_STRING>>>((__int64)&v59, (__int64)&v56);
  BufferLength[0] = 0;
  *(_QWORD *)(v8 + 8) = 0LL;
  PhysicalDeviceObject = a1->PhysicalDeviceObject;
  DeviceProperty = IoGetDeviceProperty(PhysicalDeviceObject, DevicePropertyFriendlyName, 0, 0LL, BufferLength);
  if ( (int)(DeviceProperty + 0x80000000) >= 0 && DeviceProperty != -1073741789 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qql(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0xDu,
        0x10u,
        (struct _GUID *)&WPP_901e3e1acd0b36a9ab86c452924f7c21_Traceguids,
        (char)a1,
        (char)PhysicalDeviceObject,
        DeviceProperty);
    goto LABEL_26;
  }
  v11 = BufferLength[0] + 16LL;
  if ( v11 < BufferLength[0] )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qq(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0xDu,
        0x11u,
        (struct _GUID *)&WPP_901e3e1acd0b36a9ab86c452924f7c21_Traceguids,
        (char)a1,
        PhysicalDeviceObject);
    DeviceProperty = -1073741675;
  }
  else
  {
    Pool2 = (_UNICODE_STRING *)ExAllocatePool2(64LL, v11, 1851868238LL);
    v13 = Pool2;
    if ( Pool2 )
    {
      v14 = BufferLength[0];
      *Pool2 = 0LL;
      inited = IoGetDeviceProperty(PhysicalDeviceObject, DevicePropertyFriendlyName, v14, &Pool2[1], BufferLength);
      DeviceProperty = inited;
      if ( inited >= 0 )
      {
        inited = WdmlibRtlInitUnicodeStringEx(v13, (PCWSTR)&v13[1]);
        DeviceProperty = inited;
        if ( inited >= 0 )
        {
          *(_QWORD *)(v8 + 8) = v13;
          DeviceProperty = 0;
          goto LABEL_26;
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v16 = 20;
          goto LABEL_14;
        }
      }
      else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v16 = 19;
LABEL_14:
        WPP_RECORDER_SF_qql(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          2u,
          0xDu,
          v16,
          (struct _GUID *)&WPP_901e3e1acd0b36a9ab86c452924f7c21_Traceguids,
          (char)a1,
          (char)PhysicalDeviceObject,
          inited);
      }
      ExFreePoolWithTag(v13, 0);
      goto LABEL_26;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qq(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0xDu,
        0x12u,
        (struct _GUID *)&WPP_901e3e1acd0b36a9ab86c452924f7c21_Traceguids,
        (char)a1,
        PhysicalDeviceObject);
    DeviceProperty = -1073741670;
  }
LABEL_26:
  if ( v60 )
    wil::attach_to_smart_pointer<wistd::unique_ptr<_UNICODE_STRING,KFreePool<_UNICODE_STRING>>,void>();
  v17 = DeviceProperty < 0;
  if ( DeviceProperty )
  {
    v18 = wil::out_param<wistd::unique_ptr<_UNICODE_STRING,KFreePool<_UNICODE_STRING>>>((__int64)&v59, (__int64)&v56);
    DeviceProperty = ndisMiniportQueryDeviceProperty(
                       (__int64)a1,
                       DevicePropertyDeviceDescription,
                       (PUNICODE_STRING *)(v18 + 8));
    if ( v60 )
      wil::attach_to_smart_pointer<wistd::unique_ptr<_UNICODE_STRING,KFreePool<_UNICODE_STRING>>,void>();
LABEL_98:
    v17 = DeviceProperty < 0;
  }
  if ( v17 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      *(_DWORD *)v53 = DeviceProperty;
      WPP_RECORDER_SF_qD(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0xDu,
        0x1Fu,
        (struct _GUID *)&WPP_901e3e1acd0b36a9ab86c452924f7c21_Traceguids,
        (char)a1,
        *(_QWORD *)v53);
    }
    v38 = (struct _UNICODE_STRING *)v56;
    v56 = 0LL;
  }
  else
  {
    v39 = (const void **)v56;
    v40 = *((unsigned __int16 *)v56 + 1);
    v41 = v40 + 16;
    if ( v40 + 16 >= v40 && (v42 = ExAllocatePool2(64LL, v41, 1851868238LL), (v43 = (unsigned __int16 *)v42) != 0LL) )
    {
      *(_QWORD *)v42 = 0LL;
      *(_QWORD *)(v42 + 8) = v42 + 16;
      *(_WORD *)v42 = *(_WORD *)v39;
      *(_WORD *)(v42 + 2) = *((_WORD *)v39 + 1);
      memmove((void *)(v42 + 16), v39[1], *(unsigned __int16 *)v39);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_Z(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          4u,
          0xDu,
          0x21u,
          (struct _GUID *)&WPP_901e3e1acd0b36a9ab86c452924f7c21_Traceguids,
          v43);
      v38 = (struct _UNICODE_STRING *)v56;
      v44 = 0;
      v45 = 0;
      v46 = (unsigned __int64)*(unsigned __int16 *)v56 >> 1;
      if ( v46 )
      {
        v47 = 0LL;
        do
        {
          v48 = v38->Buffer;
          if ( v48[v47] == 47 )
          {
            v48[v47] = 45;
            v44 = 1;
            v38 = (struct _UNICODE_STRING *)v56;
          }
          v47 = ++v45;
        }
        while ( v45 < v46 );
        if ( v44 )
        {
          v49 = v38;
          v38 = 0LL;
          *v4 = v49;
        }
      }
      *v5 = (struct _UNICODE_STRING *)v43;
    }
    else
    {
      DeviceProperty = -1073741670;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v41) = 2;
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v41,
          13,
          32,
          (struct _GUID *)&WPP_901e3e1acd0b36a9ab86c452924f7c21_Traceguids,
          (char)a1);
      }
      v38 = (struct _UNICODE_STRING *)v56;
    }
    v56 = 0LL;
  }
  if ( v38 )
    ExFreePoolWithTag(v38, 0);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v53 = DeviceProperty;
    WPP_RECORDER_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0x22u,
      (struct _GUID *)&WPP_901e3e1acd0b36a9ab86c452924f7c21_Traceguids,
      (char)a1,
      *(_QWORD *)v53);
  }
  return (unsigned int)DeviceProperty;
}
