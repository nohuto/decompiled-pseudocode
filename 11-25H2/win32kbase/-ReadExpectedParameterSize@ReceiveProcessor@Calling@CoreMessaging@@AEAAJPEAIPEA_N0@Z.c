/*
 * XREFs of ?ReadExpectedParameterSize@ReceiveProcessor@Calling@CoreMessaging@@AEAAJPEAIPEA_N0@Z @ 0x140069EC4
 * Callers:
 *     ?UnmarshalReceive@ReceiveProcessor@Calling@CoreMessaging@@QEAAJPEAUIMessageCallReceiveHost@@PEBUMsgCallTypeDefinition@@PEBEIIPEBXI@Z @ 0x140069B64 (-UnmarshalReceive@ReceiveProcessor@Calling@CoreMessaging@@QEAAJPEAUIMessageCallReceiveHost@@PEBU.c)
 *     ?ReadExpectedParameterSize@ReceiveProcessor@Calling@CoreMessaging@@AEAAJPEAIPEA_N0@Z @ 0x140069EC4 (-ReadExpectedParameterSize@ReceiveProcessor@Calling@CoreMessaging@@AEAAJPEAIPEA_N0@Z.c)
 * Callees:
 *     ?ReadExpectedParameterSize@ReceiveProcessor@Calling@CoreMessaging@@AEAAJPEAIPEA_N0@Z @ 0x140069EC4 (-ReadExpectedParameterSize@ReceiveProcessor@Calling@CoreMessaging@@AEAAJPEAIPEA_N0@Z.c)
 *     ?ReadStringArrayLength@ReceiveProcessor@Calling@CoreMessaging@@AEAAJPEAI@Z @ 0x140242C04 (-ReadStringArrayLength@ReceiveProcessor@Calling@CoreMessaging@@AEAAJPEAI@Z.c)
 *     ?UpdateStringArrayPointers@ReceiveProcessor@Calling@CoreMessaging@@AEAAJI@Z @ 0x140242C58 (-UpdateStringArrayPointers@ReceiveProcessor@Calling@CoreMessaging@@AEAAJI@Z.c)
 *     ?Error@FailFast@Calling@CoreMessaging@@SAXPEBDI@Z @ 0x140242D64 (-Error@FailFast@Calling@CoreMessaging@@SAXPEBDI@Z.c)
 */

__int64 __fastcall CoreMessaging::Calling::ReceiveProcessor::ReadExpectedParameterSize(
        CoreMessaging::Calling::ReceiveProcessor *this,
        unsigned int *a2,
        bool *a3,
        unsigned int *a4)
{
  unsigned __int8 *v4; // rax
  int v8; // r10d
  _BYTE *v9; // rcx
  int v10; // r10d
  int v11; // r10d
  int v12; // r10d
  int v13; // r10d
  int v14; // r10d
  int v15; // r10d
  int v16; // r8d
  int v17; // edx
  __int64 result; // rax
  __int64 v19; // rcx
  unsigned __int64 v20; // rax
  bool v21; // zf
  int v22; // r10d
  int v23; // r10d
  int v24; // r10d
  int v25; // r10d
  int v26; // r10d
  int v27; // r10d
  int v28; // r10d
  __int64 v29; // rdi
  unsigned int v30; // ecx
  bool v31; // [rsp+40h] [rbp+8h] BYREF
  unsigned int v32; // [rsp+48h] [rbp+10h] BYREF
  unsigned int v33; // [rsp+50h] [rbp+18h] BYREF

  v4 = (unsigned __int8 *)*((_QWORD *)this + 1);
  *a2 = 0;
  *a3 = 0;
  *a4 = 0;
  v8 = *v4;
  v9 = v4 + 1;
  *((_QWORD *)this + 1) = v4 + 1;
  if ( (unsigned __int8)v8 <= 8u )
  {
    if ( (_BYTE)v8 == 8 )
      goto LABEL_43;
    if ( !v8 )
      goto LABEL_27;
    v22 = v8 - 1;
    if ( !v22 )
    {
LABEL_41:
      *a2 = 1;
      return 0LL;
    }
    v23 = v22 - 1;
    if ( !v23 )
      goto LABEL_42;
    v24 = v23 - 1;
    if ( !v24 )
      goto LABEL_11;
    v25 = v24 - 1;
    if ( !v25 )
      goto LABEL_43;
    v26 = v25 - 1;
    if ( !v26 )
      goto LABEL_41;
    v27 = v26 - 1;
    if ( !v27 )
    {
LABEL_42:
      *a2 = 2;
      return 0LL;
    }
    if ( v27 != 1 )
      goto LABEL_27;
LABEL_11:
    *a2 = 4;
    return 0LL;
  }
  v10 = v8 - 9;
  if ( !v10 )
    goto LABEL_11;
  v11 = v10 - 1;
  if ( !v11 )
  {
LABEL_43:
    *a2 = 8;
    return 0LL;
  }
  v12 = v11 - 1;
  if ( !v12 )
    goto LABEL_42;
  v13 = v12 - 1;
  if ( !v13 )
    goto LABEL_41;
  v14 = v13 - 1;
  if ( !v14 )
  {
    v19 = *((_QWORD *)this + 52);
    if ( !v19 )
      return 0LL;
    v20 = *((unsigned int *)this + 21);
    if ( (v20 & 1) != 0 )
      goto LABEL_16;
    v21 = *(_WORD *)(v19 + 2 * (v20 >> 1) - 2) == 0;
LABEL_15:
    if ( v21 )
      return 0LL;
LABEL_16:
    *((_DWORD *)this + 30) = 202;
    return 2147942487LL;
  }
  v15 = v14 - 1;
  if ( !v15 )
  {
    v16 = (unsigned __int8)*v9;
    *((_QWORD *)this + 1) = v4 + 2;
    v17 = v16 | (v4[2] << 8);
    *((_QWORD *)this + 1) = v4 + 3;
    *a2 = v17;
    return 0LL;
  }
  v28 = v15 - 1;
  if ( !v28 )
    CoreMessaging::Calling::FailFast::Error((ULONG_PTR)"mincore\\coreui\\dev\\calling\\receiveprocessor.cpp", 0x1E6uLL);
  if ( v28 != 1 )
  {
LABEL_27:
    *((_DWORD *)this + 30) = 205;
    return 2147942487LL;
  }
  v21 = *v9 == 13;
  v29 = *((_QWORD *)this + 52);
  *a3 = 1;
  if ( !v21 )
  {
    v31 = 0;
    v33 = 0;
    v32 = 0;
    result = CoreMessaging::Calling::ReceiveProcessor::ReadExpectedParameterSize(this, &v32, &v31, &v33);
    if ( (int)result < 0 )
      return result;
    if ( !v29 )
      return 0LL;
    v30 = *((_DWORD *)this + 21);
    *a4 = v30 / v32;
    v21 = v30 % v32 == 0;
    goto LABEL_15;
  }
  if ( !v29 )
  {
    *((_QWORD *)this + 1) = v4 + 2;
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
