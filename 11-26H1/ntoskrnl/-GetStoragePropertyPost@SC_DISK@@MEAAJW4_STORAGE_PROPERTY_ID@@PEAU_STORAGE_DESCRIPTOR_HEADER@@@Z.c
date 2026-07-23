/*
 * XREFs of ?GetStoragePropertyPost@SC_DISK@@MEAAJW4_STORAGE_PROPERTY_ID@@PEAU_STORAGE_DESCRIPTOR_HEADER@@@Z @ 0x14071FC70
 * Callers:
 *     <none>
 * Callees:
 *     ?ScAnsiToUnicodeString@@YAJPEADPEAU_UNICODE_STRING@@@Z @ 0x14071F6CC (-ScAnsiToUnicodeString@@YAJPEADPEAU_UNICODE_STRING@@@Z.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     ?Allocate@SC_ENV@@SAPEAX_KKEK@Z @ 0x140793650 (-Allocate@SC_ENV@@SAPEAX_KKEK@Z.c)
 *     PspUserApcKernelRoutine @ 0x1409FEEE0 (PspUserApcKernelRoutine.c)
 */

__int64 __fastcall SC_DISK::GetStoragePropertyPost(
        struct _UNICODE_STRING *this,
        int a2,
        struct _STORAGE_DESCRIPTOR_HEADER *a3)
{
  unsigned int v3; // ebx
  unsigned int Buffer_high; // ecx
  unsigned int Size; // eax
  int v8; // edx
  int v9; // edx
  int v10; // edx
  char *v11; // rax
  char *v12; // rsi
  unsigned int Version; // edx

  v3 = 0;
  if ( a2 > 14 )
  {
    v8 = a2 - 21;
    if ( v8 )
    {
      v9 = v8 - 36;
      if ( v9 )
      {
        v10 = v9 - 1;
        if ( v10 )
        {
          if ( v10 == 7 )
          {
            v11 = (char *)SC_ENV::Allocate(a3[1].Version + 1, 5u, (unsigned __int8)a3, 0);
            v12 = v11;
            if ( v11 )
            {
              memmove(v11, &a3[1].Size, a3[1].Version);
              v3 = ScAnsiToUnicodeString(v12, this + 18);
              PspUserApcKernelRoutine(v12);
            }
            else
            {
              return (unsigned int)-1073741670;
            }
          }
        }
        else
        {
          Version = a3[4].Version;
          if ( Version < a3->Version || Version > a3->Size - 1 )
            a3[4].Version = 0;
        }
      }
    }
  }
  else if ( a2 == 6 )
  {
    Buffer_high = HIDWORD(this[14].Buffer);
    if ( a3[2].Version != Buffer_high )
      return (unsigned int)-1073739509;
    Size = a3[2].Size;
    if ( Size < Buffer_high || Size % Buffer_high )
      return (unsigned int)-1073739509;
  }
  return v3;
}
