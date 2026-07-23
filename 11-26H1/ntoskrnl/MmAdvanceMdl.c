/*
 * XREFs of MmAdvanceMdl @ 0x1406EF310
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall MmAdvanceMdl(PMDL Mdl, ULONG NumberOfBytes)
{
  CSHORT *p_MdlFlags; // r9
  __int64 v5; // r11
  ULONG ByteOffset; // edi
  char *StartVa; // rsi
  __int64 ByteCount; // rcx
  unsigned __int64 v9; // r10
  ULONG v10; // r11d
  __int16 v11; // bx
  __int64 *v12; // rcx
  __int64 v13; // rax
  struct _MDL *Next; // rsi
  PMDL v15; // rcx
  unsigned int v16; // r9d
  unsigned __int64 v17; // rbx
  unsigned __int64 v18; // rax
  CSHORT MdlFlags; // ax

  if ( NumberOfBytes >= Mdl->ByteCount )
    return -1073741584;
  p_MdlFlags = &Mdl->MdlFlags;
  v5 = 0LL;
  byte_140E3615C = 1;
  ByteOffset = Mdl->ByteOffset;
  StartVa = (char *)Mdl->StartVa;
  ByteCount = Mdl->ByteCount;
  v9 = ((((unsigned int)StartVa + ByteOffset) & 0xFFFuLL) + ByteCount + 4095) >> 12;
  if ( !ByteOffset )
    goto LABEL_10;
  v10 = 4096 - ByteOffset;
  v11 = *p_MdlFlags & 1;
  if ( NumberOfBytes >= 4096 - ByteOffset )
  {
    LODWORD(ByteCount) = ByteCount - v10;
    Mdl->ByteOffset = 0;
    Mdl->ByteCount = ByteCount;
    NumberOfBytes -= v10;
    Mdl->StartVa = StartVa + 4096;
    StartVa += 4096;
    if ( v11 )
      Mdl->MappedSystemVa = (char *)Mdl->MappedSystemVa + v10;
    v5 = 1LL;
LABEL_10:
    if ( NumberOfBytes )
    {
      Mdl->ByteCount = ByteCount - NumberOfBytes;
      Mdl->ByteOffset = NumberOfBytes & 0xFFF;
      v5 = (NumberOfBytes >> 12) + (unsigned int)v5;
      Mdl->StartVa = &StartVa[4096 * (unsigned __int64)(NumberOfBytes >> 12)];
      if ( (*(_BYTE *)p_MdlFlags & 1) != 0 )
        Mdl->MappedSystemVa = (char *)Mdl->MappedSystemVa + NumberOfBytes;
    }
    if ( (_DWORD)v5 )
    {
      if ( (*p_MdlFlags & 0x200) != 0 )
      {
        v12 = (__int64 *)(&Mdl[1].Next + v9);
        do
        {
          v13 = *v12;
          ++v9;
          ++v12;
        }
        while ( v13 >= 0 );
      }
      do
      {
        Next = Mdl[1].Next;
        v15 = Mdl + 1;
        if ( v9 )
        {
          v16 = 1;
          do
          {
            v17 = v16;
            if ( v16 == v9 )
              v18 = (unsigned __int64)Next | 0x8000000000000000uLL;
            else
              v18 = *(_QWORD *)&v15->Size & 0x7FFFFFFFFFFFFFFFLL;
            v15->Next = (struct _MDL *)v18;
            ++v16;
            v15 = (PMDL)((char *)v15 + 8);
          }
          while ( v17 < v9 );
        }
        --v5;
      }
      while ( v5 );
      MdlFlags = Mdl->MdlFlags;
      if ( (MdlFlags & 0x200) == 0 )
        Mdl->MdlFlags = MdlFlags | 0x200;
    }
    return 0;
  }
  Mdl->ByteCount = ByteCount - NumberOfBytes;
  Mdl->ByteOffset = ByteOffset + NumberOfBytes;
  if ( v11 )
    Mdl->MappedSystemVa = (char *)Mdl->MappedSystemVa + NumberOfBytes;
  return 0;
}
