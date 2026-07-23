/*
 * XREFs of sxsisol_RespectDotLocal @ 0x180098C80
 * Callers:
 *     RtlDosApplyFileIsolationRedirection_Ustr @ 0x18002E260 (RtlDosApplyFileIsolationRedirection_Ustr.c)
 * Callees:
 *     RtlpSysVolFree @ 0x180001CD0 (RtlpSysVolFree.c)
 *     RtlComputePrivatizedDllName_U @ 0x180098E00 (RtlComputePrivatizedDllName_U.c)
 *     RtlpEnsureBufferSize @ 0x180099CB0 (RtlpEnsureBufferSize.c)
 *     RtlDoesFileExists_UstrEx @ 0x1800A50E0 (RtlDoesFileExists_UstrEx.c)
 *     memmove @ 0x180164600 (memmove.c)
 */

__int64 __fastcall sxsisol_RespectDotLocal(_UNICODE_STRING *a1, unsigned __int16 *a2, _DWORD *a3)
{
  __int64 v5; // rdx
  NTSTATUS v6; // ebx
  unsigned __int16 Length; // ax
  _UNICODE_STRING *p_LocalName; // rbx
  unsigned __int64 v10; // r8
  __int64 *v11; // r14
  __int64 v12; // rcx
  size_t v13; // r8
  wchar_t *Buffer; // rdx
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rcx
  _UNICODE_STRING RealName; // [rsp+20h] [rbp-20h] BYREF
  _UNICODE_STRING LocalName; // [rsp+30h] [rbp-10h] BYREF

  RealName = 0LL;
  LocalName = 0LL;
  if ( !a2 )
  {
    v6 = -1073741811;
    goto LABEL_7;
  }
  v6 = RtlComputePrivatizedDllName_U(a1, &RealName, &LocalName);
  if ( v6 < 0 )
    goto LABEL_7;
  if ( LocalName.Buffer && (LOBYTE(v5) = 1, (unsigned __int8)RtlDoesFileExists_UstrEx(&LocalName, v5)) )
  {
    Length = LocalName.Length;
    p_LocalName = &LocalName;
  }
  else
  {
    if ( !RealName.Buffer )
      goto LABEL_5;
    LOBYTE(v5) = 1;
    if ( !(unsigned __int8)RtlDoesFileExists_UstrEx(&RealName, v5) )
      goto LABEL_5;
    Length = RealName.Length;
    p_LocalName = &RealName;
  }
  v10 = Length + 2LL;
  *a2 = 0;
  if ( v10 <= 0xFFFE )
  {
    v11 = (__int64 *)(a2 + 8);
    if ( (a2 == (unsigned __int16 *)-16LL || v10 > *((_QWORD *)a2 + 4)) && (int)RtlpEnsureBufferSize(0LL, a2 + 8) < 0 )
    {
      v6 = -1073741801;
      goto LABEL_7;
    }
    v12 = *v11;
    v13 = p_LocalName->Length;
    Buffer = p_LocalName->Buffer;
    v15 = (unsigned __int64)*a2 >> 1;
    *((_QWORD *)a2 + 1) = *v11;
    memmove((void *)(v12 + 2 * v15), Buffer, v13);
    v16 = (unsigned __int16)(*a2 + p_LocalName->Length);
    *a2 = v16;
    a2[1] = v16 + 2;
    *(_WORD *)(*((_QWORD *)a2 + 1) + 2 * (v16 >> 1)) = 0;
    if ( a3 )
      *a3 |= 1u;
LABEL_5:
    v6 = 0;
    goto LABEL_7;
  }
  v6 = -1073741562;
LABEL_7:
  if ( RealName.Buffer )
  {
    RtlpSysVolFree(RealName.Buffer);
    RealName = 0LL;
  }
  if ( LocalName.Buffer )
    RtlpSysVolFree(LocalName.Buffer);
  return (unsigned int)v6;
}
