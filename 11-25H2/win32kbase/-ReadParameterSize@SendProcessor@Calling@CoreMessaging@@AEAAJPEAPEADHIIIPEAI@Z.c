/*
 * XREFs of ?ReadParameterSize@SendProcessor@Calling@CoreMessaging@@AEAAJPEAPEADHIIIPEAI@Z @ 0x1400FE190
 * Callers:
 *     ?PrepareArray@SendProcessor@Calling@CoreMessaging@@AEAAJPEBXIIIIHPEAI@Z @ 0x1400FCD28 (-PrepareArray@SendProcessor@Calling@CoreMessaging@@AEAAJPEBXIIIIHPEAI@Z.c)
 *     ?PrepareMessageWorker@SendProcessor@Calling@CoreMessaging@@AEAAJPEAUIMessageCallSendHost@@GGPEBEPEADHIII@Z @ 0x1400FE020 (-PrepareMessageWorker@SendProcessor@Calling@CoreMessaging@@AEAAJPEAUIMessageCallSendHost@@GGPEBE.c)
 * Callees:
 *     ?PrepareArray@SendProcessor@Calling@CoreMessaging@@AEAAJPEBXIIIIHPEAI@Z @ 0x1400FCD28 (-PrepareArray@SendProcessor@Calling@CoreMessaging@@AEAAJPEBXIIIIHPEAI@Z.c)
 *     ?PrepareStruct@SendProcessor@Calling@CoreMessaging@@AEAAJPEBXHPEAI@Z @ 0x1400FE388 (-PrepareStruct@SendProcessor@Calling@CoreMessaging@@AEAAJPEBXHPEAI@Z.c)
 *     ?PrepareLPCWSTR@SendProcessor@Calling@CoreMessaging@@AEAAJPEBGIHPEAI@Z @ 0x1400FE3CC (-PrepareLPCWSTR@SendProcessor@Calling@CoreMessaging@@AEAAJPEBGIHPEAI@Z.c)
 *     ?Error@FailFast@Calling@CoreMessaging@@SAXPEBDI@Z @ 0x140242D64 (-Error@FailFast@Calling@CoreMessaging@@SAXPEBDI@Z.c)
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
  int v9; // r10d
  int v10; // r10d
  int v11; // r10d
  int v12; // r10d
  int v13; // r10d
  int v14; // r10d
  int v15; // r10d
  const void *v16; // rdx
  __int64 result; // rax
  const unsigned __int16 *v18; // rdx
  const void **v19; // rcx
  int v20; // r10d
  _QWORD *v21; // r10
  unsigned int v22; // ecx
  int v23; // r10d
  int v24; // r10d
  int v25; // r10d
  int v26; // r10d
  int v27; // r10d
  int v28; // r10d
  const void **v29; // rax
  char *v30; // rcx
  const unsigned __int16 **v31; // rcx

  *a7 = 0;
  v8 = (unsigned __int8 *)*((_QWORD *)this + 1);
  v9 = *v8;
  *((_QWORD *)this + 1) = v8 + 1;
  if ( (unsigned __int8)v9 <= 8u )
  {
    if ( (_BYTE)v9 == 8 )
      goto LABEL_21;
    if ( !v9 )
      goto LABEL_41;
    v23 = v9 - 1;
    if ( !v23 )
    {
LABEL_29:
      if ( !a3 )
        *a2 += 8;
      *a7 = 1;
      return 0LL;
    }
    v24 = v23 - 1;
    if ( !v24 )
      goto LABEL_45;
    v25 = v24 - 1;
    if ( !v25 )
      goto LABEL_13;
    v26 = v25 - 1;
    if ( !v26 )
      goto LABEL_21;
    v27 = v26 - 1;
    if ( !v27 )
      goto LABEL_29;
    v28 = v27 - 1;
    if ( !v28 )
    {
LABEL_45:
      if ( !a3 )
        *a2 += 8;
      *a7 = 2;
      return 0LL;
    }
    if ( v28 != 1 )
      goto LABEL_41;
LABEL_13:
    if ( !a3 )
      *a2 += 8;
    *a7 = 4;
    return 0LL;
  }
  v10 = v9 - 9;
  if ( !v10 )
    goto LABEL_13;
  v11 = v10 - 1;
  if ( !v11 )
  {
LABEL_21:
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
    goto LABEL_29;
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
        v19 = (const void **)*a2;
        *a2 += 8;
        v16 = *v19;
      }
      result = CoreMessaging::Calling::SendProcessor::PrepareStruct(this, v16, a3, a7);
      goto LABEL_11;
    }
    v20 = v15 - 1;
    if ( !v20 )
      CoreMessaging::Calling::FailFast::Error((ULONG_PTR)"mincore\\coreui\\dev\\calling\\sendprocessor.cpp", 0x37FuLL);
    if ( v20 == 1 )
    {
      if ( a3 )
      {
        v21 = 0LL;
        v22 = 0;
      }
      else
      {
        v29 = (const void **)*a2;
        v30 = *a2 + 8;
        *a2 = v30;
        v21 = *v29;
        *a2 = v30 + 8;
        v22 = *(_DWORD *)v30;
      }
      result = CoreMessaging::Calling::SendProcessor::PrepareArray(this, v21, v22, a4, a5, a6, a3, a7);
      goto LABEL_11;
    }
LABEL_41:
    result = 2147942487LL;
    *((_DWORD *)this + 30) = 205;
    return result;
  }
  if ( a3 )
  {
    v18 = 0LL;
  }
  else
  {
    v31 = (const unsigned __int16 **)*a2;
    *a2 += 8;
    v18 = *v31;
  }
  result = CoreMessaging::Calling::SendProcessor::PrepareLPCWSTR(this, v18, a4, a3, a7);
LABEL_11:
  if ( (int)result >= 0 )
    return 0LL;
  return result;
}
