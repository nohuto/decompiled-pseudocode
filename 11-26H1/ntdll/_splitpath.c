/*
 * XREFs of _splitpath @ 0x180128240
 * Callers:
 *     <none>
 * Callees:
 *     _splitpath_helper @ 0x1801282D0 (_splitpath_helper.c)
 */

void __cdecl splitpath(const char *FullPath, char *Drive, char *Dir, char *Filename, char *Ext)
{
  splitpath_helper(
    (char *)FullPath,
    Drive,
    -(__int64)(Dir != 0LL) & 0x100,
    Filename,
    -(__int64)(Filename != 0LL) & 0x100,
    Ext,
    -(__int64)(Ext != 0LL) & 0x100);
}
