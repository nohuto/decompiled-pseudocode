/*
 * XREFs of LdrpSignalModuleMapped @ 0x18011B4BC
 * Callers:
 *     LdrpProcessMappedModule @ 0x18011A098 (LdrpProcessMappedModule.c)
 * Callees:
 *     LdrpQueueWork @ 0x180067B50 (LdrpQueueWork.c)
 */

struct _PEB *__fastcall LdrpSignalModuleMapped(__int64 a1)
{
  struct _PEB *result; // rax
  _QWORD *ProcessHeap; // rbx
  _QWORD *v3; // rdi
  _DWORD *v4; // r8
  __int64 v5; // rcx
  int v6; // edx

  result = *(struct _PEB **)(a1 + 152);
  ProcessHeap = result->ProcessHeap;
  if ( ProcessHeap )
  {
    v3 = result->ProcessHeap;
    do
    {
      v3 = (_QWORD *)*v3;
      v4 = (_DWORD *)(v3[1] & 0xFFFFFFFFFFFFFFF8uLL);
      result = *(struct _PEB **)v4;
      v5 = *(_QWORD *)(*(_QWORD *)v4 + 16LL);
      if ( v5 )
      {
        v6 = v4[14];
        result = (struct _PEB *)(unsigned int)(*(_DWORD *)(v5 + 108) - 1);
        *(_DWORD *)(v5 + 108) = (_DWORD)result;
        if ( v6 != 5 && !(_DWORD)result )
        {
          v4[14] = 4;
          result = LdrpQueueWork(v5);
        }
      }
    }
    while ( v3 != ProcessHeap );
  }
  return result;
}
