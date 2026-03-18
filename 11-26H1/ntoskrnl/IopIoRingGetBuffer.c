/*
 * XREFs of IopIoRingGetBuffer @ 0x140B00FAC
 * Callers:
 *     IopIoRingDispatchWrite @ 0x1407987BC (IopIoRingDispatchWrite.c)
 *     IopIoRingDispatchRead @ 0x140B00E10 (IopIoRingDispatchRead.c)
 * Callees:
 *     IopExceptionFilter @ 0x1405CA834 (IopExceptionFilter.c)
 *     ProbeForRead @ 0x1408EF880 (ProbeForRead.c)
 *     ProbeForWrite @ 0x1408F5D00 (ProbeForWrite.c)
 *     IopMcGetBuffer @ 0x140B0106C (IopMcGetBuffer.c)
 */

__int64 __fastcall IopIoRingGetBuffer(
        __int64 a1,
        volatile void *a2,
        char a3,
        unsigned int a4,
        char a5,
        char a6,
        _QWORD *a7,
        _QWORD *a8)
{
  ULONG_PTR v9; // rcx

  *a7 = 0LL;
  *a8 = 0LL;
  if ( a3 )
  {
    if ( (unsigned int)a2 >= *(_DWORD *)(a1 + 176) )
    {
      return 3221226705LL;
    }
    else
    {
      v9 = *(_QWORD *)(*(_QWORD *)(a1 + 184) + 8LL * (unsigned int)a2);
      if ( v9 )
        return IopMcGetBuffer(v9, (__int64)a8);
      else
        return 3221225704LL;
    }
  }
  else
  {
    if ( a5 )
    {
      if ( a6 )
        ProbeForWrite(a2, a4, 1u);
      else
        ProbeForRead(a2, a4, 1u);
    }
    *a7 = a2;
    return 0LL;
  }
}
