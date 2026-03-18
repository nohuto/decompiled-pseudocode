/*
 * XREFs of ?ReadExpectedParameterSize@ReceiveProcessor@Calling@CoreMessaging@@AEAAJPEAIPEA_N0@Z @ 0x140153C68
 * Callers:
 *     ?UnmarshalReceive@ReceiveProcessor@Calling@CoreMessaging@@QEAAJPEAUIMessageCallReceiveHost@@PEBUMsgCallTypeDefinition@@PEBEIIPEBXI@Z @ 0x1401538FC (-UnmarshalReceive@ReceiveProcessor@Calling@CoreMessaging@@QEAAJPEAUIMessageCallReceiveHost@@PEBU.c)
 *     ?ReadExpectedParameterSize@ReceiveProcessor@Calling@CoreMessaging@@AEAAJPEAIPEA_N0@Z @ 0x140153C68 (-ReadExpectedParameterSize@ReceiveProcessor@Calling@CoreMessaging@@AEAAJPEAIPEA_N0@Z.c)
 * Callees:
 *     ?ReadExpectedParameterSize@ReceiveProcessor@Calling@CoreMessaging@@AEAAJPEAIPEA_N0@Z @ 0x140153C68 (-ReadExpectedParameterSize@ReceiveProcessor@Calling@CoreMessaging@@AEAAJPEAIPEA_N0@Z.c)
 *     ?ReadStringArrayLength@ReceiveProcessor@Calling@CoreMessaging@@AEAAJPEAI@Z @ 0x14024B998 (-ReadStringArrayLength@ReceiveProcessor@Calling@CoreMessaging@@AEAAJPEAI@Z.c)
 *     ?UpdateStringArrayPointers@ReceiveProcessor@Calling@CoreMessaging@@AEAAJI@Z @ 0x14024B9EC (-UpdateStringArrayPointers@ReceiveProcessor@Calling@CoreMessaging@@AEAAJI@Z.c)
 *     ?Error@FailFast@Calling@CoreMessaging@@SAXPEBDI@Z @ 0x14024BAF4 (-Error@FailFast@Calling@CoreMessaging@@SAXPEBDI@Z.c)
 */

__int64 __fastcall CoreMessaging::Calling::ReceiveProcessor::ReadExpectedParameterSize(
        CoreMessaging::Calling::ReceiveProcessor *this,
        unsigned int *a2,
        bool *a3,
        unsigned int *a4)
{
  unsigned __int8 *v6; // rdx
  unsigned int v9; // r10d
  _BYTE *v10; // r8
  unsigned int v11; // r10d
  unsigned int v12; // r10d
  unsigned int v13; // r10d
  unsigned int v14; // r10d
  unsigned int v15; // r10d
  unsigned int v16; // r10d
  int v17; // r8d
  unsigned __int8 *v18; // rax
  int v19; // edx
  __int64 result; // rax
  __int64 v21; // rcx
  unsigned __int64 v22; // rax
  bool v23; // zf
  unsigned int v24; // r10d
  unsigned int v25; // r10d
  unsigned int v26; // r10d
  unsigned int v27; // r10d
  unsigned int v28; // r10d
  unsigned int v29; // r10d
  unsigned int v30; // r10d
  __int64 v31; // rdi
  unsigned int v32; // ecx
  bool v33; // [rsp+40h] [rbp+8h] BYREF
  unsigned int v34; // [rsp+48h] [rbp+10h] BYREF
  unsigned int v35; // [rsp+50h] [rbp+18h] BYREF

  *a2 = 0;
  v6 = (unsigned __int8 *)*((_QWORD *)this + 1);
  *a3 = 0;
  *a4 = 0;
  v9 = *v6;
  v10 = v6 + 1;
  *((_QWORD *)this + 1) = v6 + 1;
  if ( v9 <= 8 )
  {
    if ( v9 == 8 )
      goto LABEL_43;
    if ( !v9 )
      goto LABEL_27;
    v24 = v9 - 1;
    if ( !v24 )
    {
LABEL_41:
      *a2 = 1;
      return 0LL;
    }
    v25 = v24 - 1;
    if ( !v25 )
      goto LABEL_42;
    v26 = v25 - 1;
    if ( !v26 )
      goto LABEL_11;
    v27 = v26 - 1;
    if ( !v27 )
      goto LABEL_43;
    v28 = v27 - 1;
    if ( !v28 )
      goto LABEL_41;
    v29 = v28 - 1;
    if ( !v29 )
    {
LABEL_42:
      *a2 = 2;
      return 0LL;
    }
    if ( v29 != 1 )
      goto LABEL_27;
LABEL_11:
    *a2 = 4;
    return 0LL;
  }
  v11 = v9 - 9;
  if ( !v11 )
    goto LABEL_11;
  v12 = v11 - 1;
  if ( !v12 )
  {
LABEL_43:
    *a2 = 8;
    return 0LL;
  }
  v13 = v12 - 1;
  if ( !v13 )
    goto LABEL_42;
  v14 = v13 - 1;
  if ( !v14 )
    goto LABEL_41;
  v15 = v14 - 1;
  if ( !v15 )
  {
    v21 = *((_QWORD *)this + 52);
    if ( !v21 )
      return 0LL;
    v22 = *((unsigned int *)this + 21);
    if ( (v22 & 1) != 0 )
      goto LABEL_16;
    v23 = *(_WORD *)(v21 + 2 * (v22 >> 1) - 2) == 0;
LABEL_15:
    if ( v23 )
      return 0LL;
LABEL_16:
    *((_DWORD *)this + 30) = 202;
    return 2147942487LL;
  }
  v16 = v15 - 1;
  if ( !v16 )
  {
    v17 = (unsigned __int8)*v10;
    *((_QWORD *)this + 1) = v6 + 2;
    v18 = v6 + 3;
    v19 = v6[2];
    *((_QWORD *)this + 1) = v18;
    *a2 = v17 | (v19 << 8);
    return 0LL;
  }
  v30 = v16 - 1;
  if ( !v30 )
    CoreMessaging::Calling::FailFast::Error((ULONG_PTR)"mincore\\coreui\\dev\\calling\\receiveprocessor.cpp", 0x1E6uLL);
  if ( v30 != 1 )
  {
LABEL_27:
    *((_DWORD *)this + 30) = 205;
    return 2147942487LL;
  }
  v23 = *v10 == 13;
  v31 = *((_QWORD *)this + 52);
  *a3 = 1;
  if ( !v23 )
  {
    v33 = 0;
    v35 = 0;
    v34 = 0;
    result = CoreMessaging::Calling::ReceiveProcessor::ReadExpectedParameterSize(this, &v34, &v33, &v35);
    if ( (int)result < 0 )
      return result;
    if ( !v31 )
      return 0LL;
    v32 = *((_DWORD *)this + 21);
    *a4 = v32 / v34;
    v23 = v32 % v34 == 0;
    goto LABEL_15;
  }
  if ( !v31 )
  {
    *((_QWORD *)this + 1) = v6 + 2;
    return 0LL;
  }
  result = CoreMessaging::Calling::ReceiveProcessor::ReadStringArrayLength(this, a4);
  if ( (int)result >= 0 )
  {
    if ( *a4 )
    {
      result = CoreMessaging::Calling::ReceiveProcessor::UpdateStringArrayPointers(this, *a4);
      if ( (int)result >= 0 )
        return 0LL;
      return result;
    }
    goto LABEL_16;
  }
  return result;
}
