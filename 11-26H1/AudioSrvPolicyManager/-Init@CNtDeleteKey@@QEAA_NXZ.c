/*
 * XREFs of ?Init@CNtDeleteKey@@QEAA_NXZ @ 0x18004A928
 * Callers:
 *     ?SafeRegCreateKeyEx@@YAJPEAUHKEY__@@PEBGKPEAGKKPEAU_SECURITY_ATTRIBUTES@@PEAPEAU1@PEAK@Z @ 0x18001CC00 (-SafeRegCreateKeyEx@@YAJPEAUHKEY__@@PEBGKPEAGKKPEAU_SECURITY_ATTRIBUTES@@PEAPEAU1@PEAK@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CNtDeleteKey::Init(CNtDeleteKey *this)
{
  HMODULE Library; // rax

  if ( hLibModule && qword_180068B78 )
  {
    LOBYTE(Library) = 1;
  }
  else
  {
    Library = LoadLibraryExW(L"ntdll.dll", 0LL, 0x800u);
    hLibModule = Library;
    if ( Library )
    {
      qword_180068B78 = (__int64 (__fastcall *)(_QWORD))GetProcAddress(Library, "NtDeleteKey");
      LOBYTE(Library) = qword_180068B78 != 0LL;
    }
  }
  return (char)Library;
}
