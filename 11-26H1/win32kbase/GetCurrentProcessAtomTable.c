/*
 * XREFs of GetCurrentProcessAtomTable @ 0x1401D8A80
 * Callers:
 *     DeleteStringPropertyAtoms @ 0x1401AAE70 (DeleteStringPropertyAtoms.c)
 * Callees:
 *     ReferenceWindowStation @ 0x140108B6C (ReferenceWindowStation.c)
 *     ?GetJobProcessAtomTable@Win32JobObject@@YA_NPEAPEAX@Z @ 0x1401CF10C (-GetJobProcessAtomTable@Win32JobObject@@YA_NPEAPEAX@Z.c)
 */

__int64 __fastcall GetCurrentProcessAtomTable(int *a1, void **a2)
{
  int v3; // edi
  char JobProcessAtomTable; // al
  __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 CurrentProcess; // rax
  __int64 ProcessWin32WindowStation; // rax
  __int64 v9; // r8
  __int64 v11; // [rsp+40h] [rbp+8h] BYREF

  v3 = 0;
  v11 = 0LL;
  JobProcessAtomTable = Win32JobObject::GetJobProcessAtomTable((Win32JobObject *)&v11, a2);
  v6 = v11;
  if ( JobProcessAtomTable )
  {
    if ( v11 )
    {
      v3 = 2;
    }
    else
    {
      v11 = 0LL;
      CurrentProcess = PsGetCurrentProcess(v5);
      ProcessWin32WindowStation = PsGetProcessWin32WindowStation(CurrentProcess);
      if ( (int)ReferenceWindowStation((__int64)KeGetCurrentThread(), ProcessWin32WindowStation, v9, (__int64)&v11) >= 0 )
      {
        v3 = 1;
        v6 = *(_QWORD *)(v11 + 136);
      }
    }
  }
  if ( a1 )
    *a1 = v3;
  return v6;
}
