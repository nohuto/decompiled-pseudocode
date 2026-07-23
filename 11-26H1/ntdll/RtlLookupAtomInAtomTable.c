/*
 * XREFs of RtlLookupAtomInAtomTable @ 0x180051C30
 * Callers:
 *     <none>
 * Callees:
 *     NLS_UPCASE @ 0x180021F40 (NLS_UPCASE.c)
 *     RtlAcquireSRWLockExclusive @ 0x180029A40 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18002A010 (RtlReleaseSRWLockExclusive.c)
 *     RtlUnicodeStringToInteger @ 0x180052020 (RtlUnicodeStringToInteger.c)
 *     _wcsicmp @ 0x180128CB0 (_wcsicmp.c)
 */

NTSTATUS __cdecl RtlLookupAtomInAtomTable(PVOID AtomTableHandle, PWSTR AtomName, PRTL_ATOM Atom)
{
  const wchar_t *v6; // r15
  PWSTR v7; // rbx
  unsigned int i; // r10d
  unsigned __int16 v9; // ax
  __int64 v10; // rbx
  const wchar_t *v11; // rdi
  NTSTATUS v12; // ebx
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rdx
  __int16 v15; // ax
  PWSTR v16; // rcx
  __int16 v17; // dx
  PWSTR v18; // r9
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // rdi
  _UNICODE_STRING String; // [rsp+48h] [rbp-50h] BYREF
  PWSTR v23; // [rsp+58h] [rbp-40h]
  PVOID v24; // [rsp+60h] [rbp-38h]
  __int16 v25; // [rsp+A0h] [rbp+8h]
  ULONG Value; // [rsp+B8h] [rbp+20h] BYREF

  v24 = AtomTableHandle;
  v6 = 0LL;
  if ( AtomTableHandle && *(_DWORD *)AtomTableHandle == 1836020801 )
  {
    RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)AtomTableHandle + 1);
    v23 = AtomName;
    String = 0LL;
    Value = 0;
    if ( ((unsigned __int64)AtomName & 0xFFFFFFFFFFFF0000uLL) != 0 )
    {
      if ( *AtomName == 35 )
      {
        v15 = (_WORD)AtomName + 2;
        v23 = AtomName + 1;
        v16 = AtomName + 1;
        v17 = (_WORD)AtomName + 2;
        v18 = AtomName + 1;
        while ( *v16 )
        {
          if ( (unsigned __int16)(*v16 - 48) > 9u )
            goto LABEL_5;
          v16 = v18 + 1;
          v17 = (_WORD)v18++ + 2;
        }
        Value = 0;
        String.Buffer = AtomName + 1;
        String.Length = v17 - v15;
        String.MaximumLength = v17 - v15;
        if ( RtlUnicodeStringToInteger(&String, 0xAu, &Value) >= 0 )
        {
          if ( Value - 1 > 0xBFFF )
            v25 = -16384;
          else
            v25 = Value;
          LOWORD(AtomName) = v25;
LABEL_37:
          if ( (unsigned __int16)AtomName >= 0xC000u )
          {
            LOWORD(AtomName) = 0;
            v12 = -1073741811;
          }
          else
          {
            v12 = 0;
          }
          if ( Atom )
            *Atom = (unsigned __int16)AtomName;
          goto LABEL_63;
        }
      }
    }
    else if ( (unsigned __int16)AtomName < 0xC000u )
    {
      if ( !(_WORD)AtomName )
        LOWORD(AtomName) = -16384;
      goto LABEL_37;
    }
LABEL_5:
    if ( !*AtomName )
    {
      v12 = -1073741773;
LABEL_63:
      RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)AtomTableHandle + 1);
      return v12;
    }
    if ( ((unsigned __int64)AtomName & 0xFFFFFFFFFFFF0000uLL) != 0 )
    {
      v7 = AtomName;
      for ( i = 0; ; i += v9 + (v9 >> 1) + 2 * v9 )
      {
        v9 = *v7;
        if ( !*v7 )
          break;
        ++v7;
        if ( v9 >= 0x61u )
        {
          if ( v9 > 0x7Au )
            v9 = NLS_UPCASE(qword_1801C5038, v9);
          else
            v9 -= 32;
        }
      }
      v10 = v7 - AtomName;
      if ( (unsigned int)v10 > 0xFF )
      {
        v11 = 0LL;
        goto LABEL_20;
      }
      v11 = (const wchar_t *)((char *)AtomTableHandle + 8 * (i % *((_DWORD *)AtomTableHandle + 16)) + 72);
      do
        v11 = *(const wchar_t **)v11;
      while ( v11 && (*((unsigned __int8 *)v11 + 16) != (_DWORD)v10 || wcsicmp(v11 + 9, AtomName)) );
    }
    else
    {
      v11 = 0LL;
      if ( (unsigned __int16)AtomName >= 0xC000u )
      {
        v19 = *((_QWORD *)AtomTableHandle + 5);
        v20 = v19 + *((_DWORD *)AtomTableHandle + 5) * ((unsigned __int16)AtomName & 0x3FFFu);
        if ( v20
          && v20 >= v19
          && v20 < *((_QWORD *)AtomTableHandle + 6)
          && ((*((_DWORD *)AtomTableHandle + 5) - 1) & (unsigned int)v20) == 0
          && (*(_BYTE *)v20 & 1) != 0 )
        {
          v11 = *(const wchar_t **)(v20 + 8);
        }
        else
        {
          v11 = 0LL;
        }
      }
    }
    if ( v11 == (const wchar_t *)-12LL )
    {
      v12 = -1073741801;
LABEL_21:
      if ( v12 >= 0 )
      {
        if ( v6 )
        {
          v13 = *((_QWORD *)AtomTableHandle + 5);
          v14 = v13 + *((_DWORD *)AtomTableHandle + 5) * (unsigned int)v6[4];
          if ( v14
            && v14 >= v13
            && v14 < *((_QWORD *)AtomTableHandle + 6)
            && ((*((_DWORD *)AtomTableHandle + 5) - 1) & (unsigned int)v14) == 0
            && (*(_BYTE *)v14 & 1) != 0
            && *(_QWORD *)(v14 + 8) )
          {
            v12 = 0;
            if ( Atom )
              *Atom = v6[5];
          }
          else
          {
            v12 = -1073741816;
          }
        }
        else
        {
          v12 = -1073741772;
        }
      }
      goto LABEL_63;
    }
LABEL_20:
    v6 = v11;
    v12 = 0;
    goto LABEL_21;
  }
  return -1073741811;
}
