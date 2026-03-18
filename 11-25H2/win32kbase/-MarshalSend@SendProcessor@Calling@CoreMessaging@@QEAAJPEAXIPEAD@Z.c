/*
 * XREFs of ?MarshalSend@SendProcessor@Calling@CoreMessaging@@QEAAJPEAXIPEAD@Z @ 0x1400FDAF8
 * Callers:
 *     CoreUICallSendVaList @ 0x1400FD958 (CoreUICallSendVaList.c)
 * Callees:
 *     ?MarshalArray@SendProcessor@Calling@CoreMessaging@@AEAAXPEAHPEBX@Z @ 0x1401A07B8 (-MarshalArray@SendProcessor@Calling@CoreMessaging@@AEAAXPEAHPEBX@Z.c)
 *     ?MarshalStringArray@SendProcessor@Calling@CoreMessaging@@AEAAXPEAHPEBXI@Z @ 0x140242AAC (-MarshalStringArray@SendProcessor@Calling@CoreMessaging@@AEAAXPEAHPEBXI@Z.c)
 *     ?Error@FailFast@Calling@CoreMessaging@@SAXPEBDI@Z @ 0x140242D64 (-Error@FailFast@Calling@CoreMessaging@@SAXPEBDI@Z.c)
 *     memmove @ 0x140243540 (memmove.c)
 */

__int64 __fastcall CoreMessaging::Calling::SendProcessor::MarshalSend(
        CoreMessaging::Calling::SendProcessor *this,
        char *a2,
        int a3,
        char *a4)
{
  char *v6; // rcx
  char *v7; // rcx
  __int64 v8; // rax
  unsigned int v9; // eax
  unsigned int v10; // r9d
  char *v11; // rax
  char v12; // cl
  _DWORD *v14; // r8
  int v15; // ecx
  unsigned int v16; // r8d
  int *v17; // r10
  unsigned __int8 *v18; // rax
  int v19; // ecx
  char *v20; // r8
  int v21; // ecx
  int v22; // ecx
  int v23; // ecx
  int v24; // ecx
  int v25; // ecx
  int v26; // ecx
  const void *v27; // rdx
  __int64 v28; // rax
  const void *v29; // r8
  int v30; // ecx
  int v31; // ecx
  int v32; // ecx
  int v33; // ecx
  int v34; // ecx
  int v35; // ecx
  const void *v36; // rdx
  CoreMessaging::Calling::SendProcessor *v37; // rcx
  char v38; // al
  unsigned int v39; // r9d

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
  v8 = *(_QWORD *)this;
  *((_DWORD *)this + 31) = 0;
  *((_QWORD *)this + 1) = v8;
  v9 = 0;
  v10 = 0;
  while ( v9 < *((_DWORD *)this + 20) )
  {
    if ( (unsigned int)(*((_DWORD *)this + 26) - *((_DWORD *)this + 24)) < 4
      || (v14 = (_DWORD *)*((_QWORD *)this + 12), *((_QWORD *)this + 12) = v14 + 1, !v14) )
    {
      CoreMessaging::Calling::FailFast::Error((ULONG_PTR)"mincore\\coreui\\dev\\calling\\sendprocessor.cpp", 0xE2uLL);
    }
    v15 = *((_DWORD *)this + v10 + 4);
    *v14 = v15;
    *((_DWORD *)this + 21) = v15;
    v16 = (v15 + 3) & 0xFFFFFFFC;
    if ( *((_DWORD *)this + 26) - *((_DWORD *)this + 24) < v16
      || (v17 = (int *)*((_QWORD *)this + 12), *((_QWORD *)this + 12) = (char *)v17 + v16, !v17) )
    {
      CoreMessaging::Calling::FailFast::Error((ULONG_PTR)"mincore\\coreui\\dev\\calling\\sendprocessor.cpp", 0xECuLL);
    }
    v18 = (unsigned __int8 *)*((_QWORD *)this + 1);
    v19 = *v18;
    v20 = (char *)(v18 + 1);
    *((_QWORD *)this + 1) = v18 + 1;
    if ( (unsigned __int8)v19 <= 8u )
    {
      if ( (_BYTE)v19 == 8 )
        goto LABEL_39;
      if ( !v19 )
        goto LABEL_38;
      v30 = v19 - 1;
      if ( !v30 )
        goto LABEL_30;
      v31 = v30 - 1;
      if ( !v31 )
        goto LABEL_30;
      v32 = v31 - 1;
      if ( !v32 )
        goto LABEL_30;
      v33 = v32 - 1;
      if ( !v33 )
      {
LABEL_39:
        *(_QWORD *)v17 = *(_QWORD *)a4;
      }
      else
      {
        v34 = v33 - 1;
        if ( v34 && (unsigned int)(v34 - 1) >= 2 )
          goto LABEL_38;
LABEL_30:
        *v17 = *(_DWORD *)a4;
      }
LABEL_31:
      a4 += 8;
      goto LABEL_23;
    }
    v21 = v19 - 9;
    if ( !v21 )
    {
      *(float *)v17 = *(double *)a4;
      goto LABEL_31;
    }
    v22 = v21 - 1;
    if ( !v22 )
      goto LABEL_39;
    v23 = v22 - 1;
    if ( !v23 )
      goto LABEL_30;
    v24 = v23 - 1;
    if ( !v24 )
      goto LABEL_30;
    v25 = v24 - 1;
    if ( !v25 )
    {
      v29 = *(const void **)a4;
      a4 += 8;
      CoreMessaging::Calling::SendProcessor::MarshalArray(this, v17, v29);
      goto LABEL_23;
    }
    v26 = v25 - 1;
    if ( v26 )
    {
      v35 = v26 - 1;
      if ( !v35 )
        CoreMessaging::Calling::FailFast::Error((ULONG_PTR)"mincore\\coreui\\dev\\calling\\sendprocessor.cpp", 0x178uLL);
      if ( v35 != 1 )
LABEL_38:
        CoreMessaging::Calling::FailFast::Error((ULONG_PTR)"mincore\\coreui\\dev\\calling\\sendprocessor.cpp", 0x1A3uLL);
      v36 = *(const void **)a4;
      v37 = (CoreMessaging::Calling::SendProcessor *)(v18 + 2);
      v38 = *v20;
      a4 += 16;
      v39 = *((_DWORD *)a4 - 2);
      *((_QWORD *)this + 1) = v20 + 1;
      if ( v38 == 14 )
      {
        *((_QWORD *)this + 1) = v20 + 3;
LABEL_44:
        CoreMessaging::Calling::SendProcessor::MarshalArray(this, v17, v36);
        goto LABEL_23;
      }
      if ( v38 != 13 )
        goto LABEL_44;
      CoreMessaging::Calling::SendProcessor::MarshalStringArray(v37, v17, v36, v39);
    }
    else
    {
      v27 = *(const void **)a4;
      v28 = 2LL;
      a4 += 8;
      do
      {
        ++v20;
        --v28;
      }
      while ( v28 );
      *((_QWORD *)this + 1) = v20;
      memmove(v17, v27, *((unsigned int *)this + 21));
    }
LABEL_23:
    v9 = ++*((_DWORD *)this + 31);
    v10 = v9;
  }
  v11 = (char *)*((_QWORD *)this + 1);
  v12 = *v11;
  *((_QWORD *)this + 1) = v11 + 1;
  if ( v12 )
    CoreMessaging::Calling::FailFast::Error((ULONG_PTR)"mincore\\coreui\\dev\\calling\\sendprocessor.cpp", 0x1B5uLL);
  return 0LL;
}
