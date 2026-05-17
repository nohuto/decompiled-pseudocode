/*
 * XREFs of RtlQueryAtomInAtomTable @ 0x180037300
 * Callers:
 *     <none>
 * Callees:
 *     RtlpLockAtomTable @ 0x180037A80 (RtlpLockAtomTable.c)
 *     RtlpAtomMapAtomToHandleEntry @ 0x180037AB0 (RtlpAtomMapAtomToHandleEntry.c)
 *     RtlReleaseSRWLockExclusive @ 0x18003FAA0 (RtlReleaseSRWLockExclusive.c)
 *     _snwprintf_s @ 0x180133250 (_snwprintf_s.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 *     memmove @ 0x180164700 (memmove.c)
 */

__int64 __fastcall RtlQueryAtomInAtomTable(
        __int64 a1,
        unsigned __int16 a2,
        _DWORD *a3,
        _DWORD *a4,
        void *a5,
        unsigned int *a6)
{
  int v8; // ebx
  __int64 v10; // rdx
  unsigned int v11; // edi
  __int64 v12; // rax
  unsigned int v13; // r10d
  unsigned __int16 *v14; // rax
  unsigned int v15; // esi
  unsigned int v16; // eax
  unsigned __int64 v17; // rbx
  unsigned int v18; // eax
  wchar_t Buffer[16]; // [rsp+40h] [rbp-68h] BYREF

  v8 = a2;
  if ( (unsigned __int8)RtlpLockAtomTable() )
  {
    if ( (unsigned __int16)v8 < 0xC000u )
    {
      if ( !(_WORD)v8 )
      {
        v11 = -1073741811;
        goto LABEL_31;
      }
      v11 = 0;
      if ( a3 )
        *a3 = 1;
      if ( a4 )
        *a4 = 1;
      if ( !a5 )
        goto LABEL_31;
      v15 = 2 * snwprintf_s(Buffer, 0x10uLL, 0xFFFFFFFFFFFFFFFFuLL, L"#%u", v8);
      v18 = *a6;
      if ( v15 >= *a6 )
      {
        v15 = v18 - 2;
        if ( v18 < 2 )
          v15 = 0;
      }
      if ( v15 )
      {
        memmove(a5, Buffer, v15);
        v17 = (unsigned __int64)v15 >> 1;
        goto LABEL_14;
      }
    }
    else
    {
      v11 = -1073741816;
      v12 = RtlpAtomMapAtomToHandleEntry(a1, v8 & 0x3FFF);
      v10 = v12;
      if ( !v12 )
        goto LABEL_31;
      if ( *(_WORD *)(v12 + 10) != (_WORD)v8 )
        goto LABEL_31;
      v14 = (unsigned __int16 *)(v12 + 12);
      if ( !v14 )
        goto LABEL_31;
      v11 = v13;
      if ( a3 )
        *a3 = *v14;
      if ( a4 )
        *a4 = *(unsigned __int16 *)(v10 + 14);
      if ( !a5 )
        goto LABEL_31;
      v15 = 2 * *(unsigned __int8 *)(v10 + 16);
      v16 = *a6;
      if ( v15 >= *a6 )
      {
        if ( v16 < 2 )
        {
          *a6 = v15;
          v15 = v13;
        }
        else
        {
          v15 = v16 - 2;
        }
      }
      if ( v15 )
      {
        memmove(a5, (const void *)(v10 + 18), v15);
        v17 = (unsigned __int64)v15 >> 1;
LABEL_14:
        *((_WORD *)a5 + v17) = 0;
        *a6 = v15;
LABEL_31:
        RtlReleaseSRWLockExclusive(a1 + 8, v10);
        return v11;
      }
    }
    v11 = -1073741789;
    goto LABEL_31;
  }
  return 3221225485LL;
}
