/*
 * XREFs of RtlpLookupPrimaryFunctionEntry @ 0x1405256A0
 * Callers:
 *     RtlDispatchException @ 0x1403D8F00 (RtlDispatchException.c)
 *     RtlLookupExceptionHandler @ 0x1405255F8 (RtlLookupExceptionHandler.c)
 *     CcInitializeBcbProfiler @ 0x140C86424 (CcInitializeBcbProfiler.c)
 * Callees:
 *     RtlRaiseStatus @ 0x1402CA4E0 (RtlRaiseStatus.c)
 *     ??0CUmaUnwindInfo@@QEAA@PEAU_UNWIND_INFO@@@Z @ 0x140412AD4 (--0CUmaUnwindInfo@@QEAA@PEAU_UNWIND_INFO@@@Z.c)
 *     ??0CUmaFnEnt@@QEAA@PEAU_IMAGE_RUNTIME_FUNCTION_ENTRY@@@Z @ 0x1404DBB3C (--0CUmaFnEnt@@QEAA@PEAU_IMAGE_RUNTIME_FUNCTION_ENTRY@@@Z.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

struct _IMAGE_RUNTIME_FUNCTION_ENTRY *__fastcall RtlpLookupPrimaryFunctionEntry(
        struct _IMAGE_RUNTIME_FUNCTION_ENTRY *a1,
        __int64 a2,
        unsigned __int64 a3)
{
  CUmaFnEnt *v4; // rax
  unsigned int v5; // ebx
  CUmaUnwindInfo *v6; // rax
  __int128 v7; // xmm2
  __int64 v8; // rax
  unsigned int v10; // ebx
  _BYTE *v11; // rdx
  __int128 v12; // [rsp+20h] [rbp-69h]
  __int64 v13; // [rsp+30h] [rbp-59h]
  _BYTE v14[24]; // [rsp+70h] [rbp-19h] BYREF
  _BYTE v15[48]; // [rsp+88h] [rbp-1h] BYREF
  __int128 v16; // [rsp+B8h] [rbp+2Fh] BYREF
  __int64 v17; // [rsp+C8h] [rbp+3Fh]

  if ( a3 >= 0x7FFFFFFF0000LL )
  {
    v10 = 0;
    while ( 1 )
    {
      v11 = (_BYTE *)(a2 + a1->UnwindInfoAddress);
      if ( (*v11 & 0x20) == 0 )
        break;
      ++v10;
      a1 = (struct _IMAGE_RUNTIME_FUNCTION_ENTRY *)&v11[2 * (unsigned __int8)v11[2] + 4 + 2 * (v11[2] & 1)];
      if ( v10 > 0x20 )
        RtlRaiseStatus(-1073741569);
    }
    return a1;
  }
  else
  {
    v4 = CUmaFnEnt::CUmaFnEnt((CUmaFnEnt *)v14, a1);
    v5 = 0;
    v12 = *(_OWORD *)v4;
    v13 = *((_QWORD *)v4 + 2);
    while ( 1 )
    {
      v6 = CUmaUnwindInfo::CUmaUnwindInfo((CUmaUnwindInfo *)v15, (struct _UNWIND_INFO *)(a2 + DWORD2(v12)));
      v7 = *(_OWORD *)v6;
      v8 = *((_QWORD *)v6 + 1);
      if ( (v8 & 0x20) == 0 )
        break;
      CUmaFnEnt::CUmaFnEnt(
        (CUmaFnEnt *)&v16,
        (struct _IMAGE_RUNTIME_FUNCTION_ENTRY *)(v7 + 4 + 2LL * (BYTE2(v8) + (BYTE2(v8) & 1u))));
      ++v5;
      DWORD2(v12) = DWORD2(v16);
      v13 = v17;
      if ( v5 > 0x20 )
        RtlRaiseStatus(-1073741569);
    }
    return (struct _IMAGE_RUNTIME_FUNCTION_ENTRY *)v13;
  }
}
