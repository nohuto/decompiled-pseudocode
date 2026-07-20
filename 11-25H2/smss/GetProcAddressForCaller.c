/*
 * XREFs of GetProcAddressForCaller @ 0x14001D308
 * Callers:
 *     wil_details_GetNtDllProcedureAddress @ 0x14001BEB0 (wil_details_GetNtDllProcedureAddress.c)
 * Callees:
 *     BaseSetLastNTError @ 0x14001EE28 (BaseSetLastNTError.c)
 *     BasepMapModuleHandle @ 0x14001EE5C (BasepMapModuleHandle.c)
 */

__int64 __fastcall GetProcAddressForCaller(__int64 a1, const char *a2, __int64 a3)
{
  int v3; // ebx
  __int64 v7; // rax
  __int64 v8; // r8
  struct _STRING *v9; // rdx
  int ProcedureAddressForCaller; // eax
  __int64 v11; // rcx
  __int64 v13; // rax
  struct _STRING v14; // [rsp+30h] [rbp-18h] BYREF
  __int64 v15; // [rsp+58h] [rbp+10h] BYREF

  v3 = 0;
  v15 = 0LL;
  v14 = 0LL;
  if ( (unsigned __int64)a2 <= 0xFFFF )
  {
    v7 = ((__int64 (*)(void))BasepMapModuleHandle)();
    v9 = 0LL;
    v8 = (unsigned int)a2;
  }
  else
  {
    RtlInitString(&v14, a2);
    v7 = BasepMapModuleHandle(a1);
    v8 = 0LL;
    v9 = &v14;
  }
  ProcedureAddressForCaller = LdrGetProcedureAddressForCaller(
                                v7,
                                v9,
                                v8,
                                &v15,
                                0,
                                a3,
                                *(_QWORD *)&v14.Length,
                                v14.Buffer);
  if ( ProcedureAddressForCaller < 0 )
  {
    v11 = (unsigned int)ProcedureAddressForCaller;
LABEL_6:
    BaseSetLastNTError(v11);
    return 0LL;
  }
  v13 = BasepMapModuleHandle(a1);
  if ( v15 == v13 )
  {
    LOBYTE(v3) = (unsigned __int64)a2 > 0xFFFF;
    v11 = (unsigned int)(v3 - 1073741512);
    goto LABEL_6;
  }
  return v15;
}
