/*
 * XREFs of ?MarshalSend@SendProcessor@Calling@CoreMessaging@@QEAAJPEAXIPEAD@Z @ 0x1400D89CC
 * Callers:
 *     CoreUICallSendVaList @ 0x1400D8828 (CoreUICallSendVaList.c)
 * Callees:
 *     ?MarshalArray@SendProcessor@Calling@CoreMessaging@@AEAAXPEAHPEBX@Z @ 0x1401C3AF0 (-MarshalArray@SendProcessor@Calling@CoreMessaging@@AEAAXPEAHPEBX@Z.c)
 *     ?MarshalStringArray@SendProcessor@Calling@CoreMessaging@@AEAAXPEAHPEBXI@Z @ 0x14024B83C (-MarshalStringArray@SendProcessor@Calling@CoreMessaging@@AEAAXPEAHPEBXI@Z.c)
 *     ?Error@FailFast@Calling@CoreMessaging@@SAXPEBDI@Z @ 0x14024BAF4 (-Error@FailFast@Calling@CoreMessaging@@SAXPEBDI@Z.c)
 *     memmove @ 0x14024C2C0 (memmove.c)
 */

__int64 __fastcall CoreMessaging::Calling::SendProcessor::MarshalSend(
        CoreMessaging::Calling::SendProcessor *this,
        char *a2,
        int a3,
        char *a4)
{
  char *v6; // rcx
  char *v7; // rcx
  unsigned int v8; // eax
  unsigned int v9; // r9d
  char *v10; // rax
  char v11; // cl
  _DWORD *v13; // r8
  int v14; // ecx
  unsigned int v15; // r8d
  int *v16; // r10
  unsigned __int8 *v17; // rax
  unsigned int v18; // ecx
  char *v19; // r9
  unsigned int v20; // ecx
  unsigned int v21; // ecx
  unsigned int v22; // ecx
  unsigned int v23; // ecx
  unsigned int v24; // ecx
  unsigned int v25; // ecx
  const void *v26; // rdx
  unsigned __int8 *v27; // rax
  __int64 v28; // rcx
  unsigned __int8 *v29; // r8
  const void *v30; // r8
  unsigned int v31; // ecx
  unsigned int v32; // ecx
  unsigned int v33; // ecx
  unsigned int v34; // ecx
  unsigned int v35; // ecx
  unsigned int v36; // ecx
  char v37; // al
  const void *v38; // r8
  unsigned int v39; // edx

  if ( ((a3 + 3) & 0xFFFFFFFC) != a3 )
LABEL_25:
    CoreMessaging::Calling::FailFast::Error((ULONG_PTR)"mincore\\coreui\\dev\\calling\\sendprocessor.cpp", 0xB4uLL);
  *((_BYTE *)this + 112) = 0;
  *((_QWORD *)this + 11) = a2;
  *((_QWORD *)this + 12) = a2;
  v6 = &a2[a3];
  if ( v6 < a2 )
  {
    *((_QWORD *)this + 13) = -1LL;
    goto LABEL_25;
  }
  *((_QWORD *)this + 13) = v6;
  if ( (unsigned int)((_DWORD)v6 - *((_DWORD *)this + 24)) < 8 )
  {
    v7 = 0LL;
  }
  else
  {
    v7 = a2;
    *((_QWORD *)this + 12) = a2 + 8;
  }
  *(_DWORD *)v7 = *((_DWORD *)this + 36);
  *((_WORD *)v7 + 2) = *((_WORD *)this + 74);
  *((_WORD *)v7 + 3) = *((_WORD *)this + 75);
  *((_QWORD *)this + 1) = *(_QWORD *)this;
  v8 = 0;
  v9 = 0;
  *((_DWORD *)this + 31) = 0;
  while ( v8 < *((_DWORD *)this + 20) )
  {
    if ( (unsigned int)(*((_DWORD *)this + 26) - *((_DWORD *)this + 24)) < 4
      || (v13 = (_DWORD *)*((_QWORD *)this + 12), *((_QWORD *)this + 12) = v13 + 1, !v13) )
    {
      CoreMessaging::Calling::FailFast::Error((ULONG_PTR)"mincore\\coreui\\dev\\calling\\sendprocessor.cpp", 0xE2uLL);
    }
    v14 = *((_DWORD *)this + v9 + 4);
    *v13 = v14;
    *((_DWORD *)this + 21) = v14;
    v15 = (v14 + 3) & 0xFFFFFFFC;
    if ( *((_DWORD *)this + 26) - *((_DWORD *)this + 24) < v15
      || (v16 = (int *)*((_QWORD *)this + 12), *((_QWORD *)this + 12) = (char *)v16 + v15, !v16) )
    {
      CoreMessaging::Calling::FailFast::Error((ULONG_PTR)"mincore\\coreui\\dev\\calling\\sendprocessor.cpp", 0xECuLL);
    }
    v17 = (unsigned __int8 *)*((_QWORD *)this + 1);
    v18 = *v17;
    v19 = (char *)(v17 + 1);
    *((_QWORD *)this + 1) = v17 + 1;
    if ( v18 <= 8 )
    {
      if ( v18 == 8 )
        goto LABEL_37;
      if ( !v18 )
        goto LABEL_48;
      v31 = v18 - 1;
      if ( !v31 )
        goto LABEL_36;
      v32 = v31 - 1;
      if ( !v32 )
        goto LABEL_36;
      v33 = v32 - 1;
      if ( !v33 )
        goto LABEL_36;
      v34 = v33 - 1;
      if ( !v34 )
      {
LABEL_37:
        *(_QWORD *)v16 = *(_QWORD *)a4;
      }
      else
      {
        v35 = v34 - 1;
        if ( v35 && v35 - 1 > 1 )
          goto LABEL_48;
LABEL_36:
        *v16 = *(_DWORD *)a4;
      }
LABEL_47:
      a4 += 8;
      goto LABEL_23;
    }
    v20 = v18 - 9;
    if ( !v20 )
    {
      *(float *)v16 = *(double *)a4;
      goto LABEL_47;
    }
    v21 = v20 - 1;
    if ( !v21 )
      goto LABEL_37;
    v22 = v21 - 1;
    if ( !v22 )
      goto LABEL_36;
    v23 = v22 - 1;
    if ( !v23 )
      goto LABEL_36;
    v24 = v23 - 1;
    if ( !v24 )
    {
      v30 = *(const void **)a4;
      a4 += 8;
      CoreMessaging::Calling::SendProcessor::MarshalArray(this, v16, v30);
      goto LABEL_23;
    }
    v25 = v24 - 1;
    if ( v25 )
    {
      v36 = v25 - 1;
      if ( !v36 )
        CoreMessaging::Calling::FailFast::Error((ULONG_PTR)"mincore\\coreui\\dev\\calling\\sendprocessor.cpp", 0x178uLL);
      if ( v36 != 1 )
LABEL_48:
        CoreMessaging::Calling::FailFast::Error((ULONG_PTR)"mincore\\coreui\\dev\\calling\\sendprocessor.cpp", 0x1A3uLL);
      v37 = *v19;
      v38 = *(const void **)a4;
      v39 = *((_DWORD *)a4 + 2);
      *((_QWORD *)this + 1) = v19 + 1;
      if ( v37 == 14 )
      {
        *((_QWORD *)this + 1) = v19 + 3;
        goto LABEL_42;
      }
      if ( v37 == 13 )
        CoreMessaging::Calling::SendProcessor::MarshalStringArray(
          (CoreMessaging::Calling::SendProcessor *)(v19 + 1),
          v16,
          v38,
          v39);
      else
LABEL_42:
        CoreMessaging::Calling::SendProcessor::MarshalArray(this, v16, v38);
      a4 += 16;
      goto LABEL_23;
    }
    v26 = *(const void **)a4;
    v27 = v17 + 2;
    a4 += 8;
    v28 = 2LL;
    do
    {
      v29 = v27++;
      --v28;
    }
    while ( v28 );
    *((_QWORD *)this + 1) = v29;
    memmove(v16, v26, *((unsigned int *)this + 21));
LABEL_23:
    v8 = ++*((_DWORD *)this + 31);
    v9 = v8;
  }
  v10 = (char *)*((_QWORD *)this + 1);
  v11 = *v10;
  *((_QWORD *)this + 1) = v10 + 1;
  if ( v11 )
    CoreMessaging::Calling::FailFast::Error((ULONG_PTR)"mincore\\coreui\\dev\\calling\\sendprocessor.cpp", 0x1B5uLL);
  return 0LL;
}
