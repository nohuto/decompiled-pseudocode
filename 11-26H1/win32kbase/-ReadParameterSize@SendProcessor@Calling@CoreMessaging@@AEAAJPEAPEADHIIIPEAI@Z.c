/*
 * XREFs of ?ReadParameterSize@SendProcessor@Calling@CoreMessaging@@AEAAJPEAPEADHIIIPEAI@Z @ 0x1400D9060
 * Callers:
 *     ?PrepareMessageWorker@SendProcessor@Calling@CoreMessaging@@AEAAJPEAUIMessageCallSendHost@@GGPEBEPEADHIII@Z @ 0x1400D8EE8 (-PrepareMessageWorker@SendProcessor@Calling@CoreMessaging@@AEAAJPEAUIMessageCallSendHost@@GGPEBE.c)
 *     ?PrepareArray@SendProcessor@Calling@CoreMessaging@@AEAAJPEBXIIIIHPEAI@Z @ 0x1400D9E28 (-PrepareArray@SendProcessor@Calling@CoreMessaging@@AEAAJPEBXIIIIHPEAI@Z.c)
 * Callees:
 *     ?PrepareStruct@SendProcessor@Calling@CoreMessaging@@AEAAJPEBXHPEAI@Z @ 0x1400D9268 (-PrepareStruct@SendProcessor@Calling@CoreMessaging@@AEAAJPEBXHPEAI@Z.c)
 *     ?PrepareLPCWSTR@SendProcessor@Calling@CoreMessaging@@AEAAJPEBGIHPEAI@Z @ 0x1400D9464 (-PrepareLPCWSTR@SendProcessor@Calling@CoreMessaging@@AEAAJPEBGIHPEAI@Z.c)
 *     ?PrepareArray@SendProcessor@Calling@CoreMessaging@@AEAAJPEBXIIIIHPEAI@Z @ 0x1400D9E28 (-PrepareArray@SendProcessor@Calling@CoreMessaging@@AEAAJPEBXIIIIHPEAI@Z.c)
 *     ?Error@FailFast@Calling@CoreMessaging@@SAXPEBDI@Z @ 0x14024BAF4 (-Error@FailFast@Calling@CoreMessaging@@SAXPEBDI@Z.c)
 */

__int64 __fastcall CoreMessaging::Calling::SendProcessor::ReadParameterSize(
        CoreMessaging::Calling::SendProcessor *this,
        char **a2,
        int a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int *a7)
{
  unsigned __int8 *v8; // rax
  unsigned int v9; // r10d
  unsigned int v10; // r10d
  unsigned int v11; // r10d
  unsigned int v12; // r10d
  unsigned int v13; // r10d
  unsigned int v14; // r10d
  unsigned int v15; // r10d
  const void *v16; // rdx
  __int64 result; // rax
  unsigned int v18; // r10d
  unsigned int v19; // r10d
  unsigned int v20; // r10d
  unsigned int v21; // r10d
  unsigned int v22; // r10d
  unsigned int v23; // r10d
  const unsigned __int16 *v24; // rdx
  const void **v25; // rcx
  unsigned int v26; // r10d
  const void *v27; // r10
  unsigned int v28; // ecx
  const void **v29; // rax
  char *v30; // rcx
  const unsigned __int16 **v31; // rcx

  *a7 = 0;
  v8 = (unsigned __int8 *)*((_QWORD *)this + 1);
  v9 = *v8;
  *((_QWORD *)this + 1) = v8 + 1;
  if ( v9 <= 8 )
  {
    if ( v9 == 8 )
      goto LABEL_30;
    if ( !v9 )
      goto LABEL_41;
    v18 = v9 - 1;
    if ( !v18 )
    {
LABEL_38:
      if ( !a3 )
        *a2 += 8;
      *a7 = 1;
      return 0LL;
    }
    v19 = v18 - 1;
    if ( !v19 )
      goto LABEL_45;
    v20 = v19 - 1;
    if ( !v20 )
      goto LABEL_22;
    v21 = v20 - 1;
    if ( !v21 )
      goto LABEL_30;
    v22 = v21 - 1;
    if ( !v22 )
      goto LABEL_38;
    v23 = v22 - 1;
    if ( !v23 )
    {
LABEL_45:
      if ( !a3 )
        *a2 += 8;
      *a7 = 2;
      return 0LL;
    }
    if ( v23 != 1 )
      goto LABEL_41;
LABEL_22:
    if ( !a3 )
      *a2 += 8;
    *a7 = 4;
    return 0LL;
  }
  v10 = v9 - 9;
  if ( !v10 )
    goto LABEL_22;
  v11 = v10 - 1;
  if ( !v11 )
  {
LABEL_30:
    if ( !a3 )
      *a2 += 8;
    *a7 = 8;
    return 0LL;
  }
  v12 = v11 - 1;
  if ( !v12 )
    goto LABEL_45;
  v13 = v12 - 1;
  if ( !v13 )
    goto LABEL_38;
  v14 = v13 - 1;
  if ( v14 )
  {
    v15 = v14 - 1;
    if ( !v15 )
    {
      if ( a3 )
      {
        v16 = 0LL;
      }
      else
      {
        v25 = (const void **)*a2;
        *a2 += 8;
        v16 = *v25;
      }
      result = CoreMessaging::Calling::SendProcessor::PrepareStruct(this, v16, a3, a7);
      goto LABEL_11;
    }
    v26 = v15 - 1;
    if ( !v26 )
      CoreMessaging::Calling::FailFast::Error((ULONG_PTR)"mincore\\coreui\\dev\\calling\\sendprocessor.cpp", 0x37FuLL);
    if ( v26 == 1 )
    {
      if ( a3 )
      {
        v27 = 0LL;
        v28 = 0;
      }
      else
      {
        v29 = (const void **)*a2;
        v30 = *a2 + 8;
        *a2 = v30;
        v27 = *v29;
        *a2 = v30 + 8;
        v28 = *(_DWORD *)v30;
      }
      result = CoreMessaging::Calling::SendProcessor::PrepareArray(this, v27, v28, a4, a5, a6, a3, a7);
      goto LABEL_11;
    }
LABEL_41:
    result = 2147942487LL;
    *((_DWORD *)this + 30) = 205;
    return result;
  }
  if ( a3 )
  {
    v24 = 0LL;
  }
  else
  {
    v31 = (const unsigned __int16 **)*a2;
    *a2 += 8;
    v24 = *v31;
  }
  result = CoreMessaging::Calling::SendProcessor::PrepareLPCWSTR(this, v24, a4, a3, a7);
LABEL_11:
  if ( (int)result >= 0 )
    return 0LL;
  return result;
}
