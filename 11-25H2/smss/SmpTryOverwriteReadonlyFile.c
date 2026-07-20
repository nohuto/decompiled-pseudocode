/*
 * XREFs of SmpTryOverwriteReadonlyFile @ 0x1400188B4
 * Callers:
 *     SmpProcessFileRenames @ 0x1400176FC (SmpProcessFileRenames.c)
 * Callees:
 *     SmpCheckFolderForRedirections @ 0x140013900 (SmpCheckFolderForRedirections.c)
 *     SmpOpenTargetFile @ 0x1400174CC (SmpOpenTargetFile.c)
 *     SmpRenameTargetFile @ 0x140017B28 (SmpRenameTargetFile.c)
 *     SmpSetTargetAttributes @ 0x14001859C (SmpSetTargetAttributes.c)
 *     __security_check_cookie @ 0x14001EFE0 (__security_check_cookie.c)
 */

__int64 __fastcall SmpTryOverwriteReadonlyFile(struct _UNICODE_STRING *a1, void *a2, char a3)
{
  __int64 v5; // rdi
  int v7; // ebx
  char v8; // al
  HANDLE Handle; // [rsp+30h] [rbp-39h] BYREF
  __int64 v11; // [rsp+38h] [rbp-31h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-29h] BYREF
  struct _FILE_BASIC_INFORMATION FileInformation; // [rsp+70h] [rbp+7h] BYREF

  memset(&ObjectAttributes.Attributes + 1, 0, 20);
  ObjectAttributes.ObjectName = a1;
  Handle = 0LL;
  ObjectAttributes.RootDirectory = 0LL;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  v5 = -1LL;
  memset(&FileInformation, 0, sizeof(FileInformation));
  v11 = -1LL;
  ObjectAttributes.Attributes = 64;
  v7 = NtQueryAttributesFile(&ObjectAttributes, &FileInformation);
  if ( v7 >= 0 )
  {
    if ( (FileInformation.FileAttributes & 0x10) != 0 )
    {
      v7 = -1073741638;
    }
    else if ( (FileInformation.FileAttributes & 1) != 0 )
    {
      if ( a3 != 1 || (v8 = SmpCheckFolderForRedirections(&a1->Length, (HANDLE *)&v11), v5 = v11, v8) )
      {
        v7 = SmpOpenTargetFile(&Handle, 0x100100u, &ObjectAttributes, 1, 3u);
        if ( v7 >= 0 )
        {
          v7 = SmpSetTargetAttributes(Handle, FileInformation.FileAttributes & 0xFFFFFFFE);
          if ( v7 >= 0 )
          {
            NtClose(Handle);
            Handle = 0LL;
            v7 = SmpRenameTargetFile((const void **)a1, a2, 1, a3);
            if ( v7 < 0 )
            {
              if ( SmpOpenTargetFile(&Handle, 0x110100u, &ObjectAttributes, 1, 3u) >= 0 )
                SmpSetTargetAttributes(Handle, FileInformation.FileAttributes);
            }
            else
            {
              v7 = 0;
            }
          }
        }
      }
      else
      {
        v7 = -1073740533;
      }
    }
    else
    {
      v7 = -1073741823;
    }
  }
  if ( Handle )
    NtClose(Handle);
  if ( v5 != -1 )
    NtClose((HANDLE)v5);
  return (unsigned int)v7;
}
