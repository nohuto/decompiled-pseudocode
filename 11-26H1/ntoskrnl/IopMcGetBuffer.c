/*
 * XREFs of IopMcGetBuffer @ 0x140B02D9C
 * Callers:
 *     IopIoRingGetBuffer @ 0x140B02CDC (IopIoRingGetBuffer.c)
 * Callees:
 *     IopMcDereferenceMdl @ 0x1404111E8 (IopMcDereferenceMdl.c)
 *     IopMcReferenceBufferEntry @ 0x1404F71E8 (IopMcReferenceBufferEntry.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     IopMcCreateBufferEntryMdl @ 0x14079E10C (IopMcCreateBufferEntryMdl.c)
 *     IopMcCreatePartialMdl @ 0x140B02E94 (IopMcCreatePartialMdl.c)
 */

__int64 __fastcall IopMcGetBuffer(
        ULONG_PTR BugCheckParameter2,
        unsigned __int64 a2,
        __int64 a3,
        _QWORD *a4,
        __int64 *a5)
{
  unsigned int v5; // edi
  unsigned int v7; // ebp
  unsigned __int64 v9; // rcx
  signed __int32 v10; // eax
  char v11; // cc
  signed __int32 v12; // eax
  __int64 PartialMdl; // rax

  v5 = 0;
  v7 = a3;
  v9 = a2 + (unsigned int)a3;
  *a4 = 0LL;
  *a5 = 0LL;
  if ( a2 > v9 )
  {
    return (unsigned int)-1073741811;
  }
  else if ( v9 > *(unsigned int *)(BugCheckParameter2 + 40) )
  {
    return (unsigned int)-1073741306;
  }
  else
  {
    *a4 = a2 + *(_QWORD *)(BugCheckParameter2 + 32);
    if ( (_DWORD)a3 && (*(_DWORD *)(BugCheckParameter2 + 12) & 5) == 0 )
    {
      v10 = _InterlockedExchangeAdd((volatile signed __int32 *)(BugCheckParameter2 + 48), 1u);
      v11 = (v10 + 1 < 0) ^ __OFADD__(1, v10) | (v10 == -1);
      v12 = v10 + 1;
      if ( v11 )
        KeBugCheckEx(0x1F4u, 2uLL, BugCheckParameter2, v12, *(_QWORD *)BugCheckParameter2);
      if ( (*(_DWORD *)(BugCheckParameter2 + 12) & 5) != 0 )
        goto LABEL_10;
      if ( !*(_QWORD *)(BugCheckParameter2 + 56) )
        IopMcCreateBufferEntryMdl(BugCheckParameter2, a2, a3, (__int64)a4);
      PartialMdl = IopMcCreatePartialMdl(BugCheckParameter2, *a4, v7);
      if ( PartialMdl )
      {
        *a5 = PartialMdl;
        IopMcReferenceBufferEntry(BugCheckParameter2);
      }
      else
      {
LABEL_10:
        IopMcDereferenceMdl(BugCheckParameter2, 0);
      }
    }
  }
  return v5;
}
