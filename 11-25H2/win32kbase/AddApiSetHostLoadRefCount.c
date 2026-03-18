/*
 * XREFs of AddApiSetHostLoadRefCount @ 0x14010FF24
 * Callers:
 *     ?LoadApiSetHost@@YAJPEAU_Win32kApiSetHost@@PEAU_UNICODE_STRING@@@Z @ 0x14010FB68 (-LoadApiSetHost@@YAJPEAU_Win32kApiSetHost@@PEAU_UNICODE_STRING@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AddApiSetHostLoadRefCount(__int64 a1, const UNICODE_STRING *a2)
{
  unsigned int v4; // ebx
  __int64 result; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  ULONG_PTR BugCheckParameter4; // rdi
  ULONG_PTR CurrentProcess; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rax
  unsigned int ProcessSessionId; // eax
  UNICODE_STRING String2; // [rsp+30h] [rbp-40h] BYREF
  UNICODE_STRING v15; // [rsp+40h] [rbp-30h] BYREF
  UNICODE_STRING v16; // [rsp+50h] [rbp-20h] BYREF
  UNICODE_STRING v17; // [rsp+60h] [rbp-10h] BYREF

  *(_QWORD *)&String2.Length = 4194366LL;
  *(_QWORD *)&v15.Length = 4718662LL;
  String2.Buffer = L"\\SystemRoot\\System32\\win32k.sys";
  *(_QWORD *)&v16.Length = 4718662LL;
  v15.Buffer = L"\\SystemRoot\\System32\\win32kbase.sys";
  *(_QWORD *)&v17.Length = 4587588LL;
  v16.Buffer = L"\\SystemRoot\\System32\\win32kfull.sys";
  v17.Buffer = L"\\SystemRoot\\System32\\win32kmin.sys";
  v4 = 0;
  if ( RtlCompareUnicodeString(a2, &String2, 0) )
  {
    if ( RtlCompareUnicodeString(a2, &v15, 0) )
    {
      if ( RtlCompareUnicodeString(a2, &v16, 0) )
      {
        if ( RtlCompareUnicodeString(a2, &v17, 0) )
        {
          BugCheckParameter4 = (ULONG_PTR)a2->Buffer;
          CurrentProcess = PsGetCurrentProcess(v7, v6);
          v12 = PsGetCurrentProcess(v11, v10);
          ProcessSessionId = PsGetProcessSessionIdEx(v12);
          KeBugCheckEx(0x164u, 0x37uLL, ProcessSessionId, CurrentProcess, BugCheckParameter4);
        }
        v4 = 3;
      }
      else
      {
        v4 = 2;
      }
    }
    else
    {
      v4 = 1;
    }
  }
  result = gSessionApiSetHostRefCount;
  *(_DWORD *)(a1 + 48) = v4;
  ++*((_DWORD *)&gSessionApiSetHostRefCount + v4);
  return result;
}
