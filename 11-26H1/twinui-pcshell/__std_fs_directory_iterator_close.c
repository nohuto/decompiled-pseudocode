/*
 * XREFs of __std_fs_directory_iterator_close @ 0x1802CD61C
 * Callers:
 *     ??$_Initialize_dir_enum@U_Dir_enum_impl@filesystem@std@@@_Dir_enum_impl@filesystem@std@@SA?AW4__std_win_error@@AEAV?$shared_ptr@U_Dir_enum_impl@filesystem@std@@@2@AEBVpath@12@W4directory_options@12@@Z @ 0x1800E16FC (--$_Initialize_dir_enum@U_Dir_enum_impl@filesystem@std@@@_Dir_enum_impl@filesystem@std@@SA-AW4__.c)
 *     ??1_Creator@_Dir_enum_impl@filesystem@std@@QEAA@XZ @ 0x1802C55CC (--1_Creator@_Dir_enum_impl@filesystem@std@@QEAA@XZ.c)
 *     ??1_Find_file_handle@filesystem@std@@QEAA@XZ @ 0x1802C7D70 (--1_Find_file_handle@filesystem@std@@QEAA@XZ.c)
 *     ??1_Dir_enum_impl@filesystem@std@@QEAA@XZ @ 0x1805861E8 (--1_Dir_enum_impl@filesystem@std@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall _std_fs_directory_iterator_close(void *a1)
{
  if ( a1 != (void *)-1LL && !FindClose(a1) )
    abort();
}
