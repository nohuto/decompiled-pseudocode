/*
 * XREFs of ??_Gfolder_change_reader_state@details@wil@@QEAAPEAXI@Z @ 0x180560654
 * Callers:
 *     ?create_common@?$folder_change_reader_t@V?$unique_storage@U?$resource_policy@PEAUfolder_change_reader_state@details@wil@@P6AXPEAU123@@Z$1?delete_folder_change_reader_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@Uerr_exception_policy@3@@wil@@AEAAJPEBG_NW4FolderChangeEvents@2@$$QEAV?$function@$$A6AXW4FolderChangeEvent@wil@@PEBG@Z@wistd@@@Z @ 0x1805610E8 (-create_common@-$folder_change_reader_t@V-$unique_storage@U-$resource_policy@PEAUfolder_change_r.c)
 *     ?delete_folder_change_reader_state@details@wil@@YAXPEAUfolder_change_reader_state@12@@Z @ 0x18056125C (-delete_folder_change_reader_state@details@wil@@YAXPEAUfolder_change_reader_state@12@@Z.c)
 *     ?create_common@?$folder_change_reader_t@V?$unique_storage@U?$resource_policy@PEAUfolder_change_reader_state@details@wil@@P6AXPEAU123@@Z$1?delete_folder_change_reader_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@AEAAJPEBG_NW4FolderChangeEvents@2@$$QEAV?$function@$$A6AXW4FolderChangeEvent@wil@@PEBG@Z@wistd@@@Z @ 0x1805F3324 (-create_common@-$folder_change_reader_t@V-$unique_storage@U-$resource_policy@PEAUfo_ea_1805F3324.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1folder_change_reader_state@details@wil@@QEAA@XZ @ 0x18056023C (--1folder_change_reader_state@details@wil@@QEAA@XZ.c)
 */

wil::details::folder_change_reader_state *__fastcall wil::details::folder_change_reader_state::`scalar deleting destructor'(
        wil::details::folder_change_reader_state *this)
{
  wil::details::folder_change_reader_state::~folder_change_reader_state(this);
  operator delete(this, (const struct std::nothrow_t *)0x10B8);
  return this;
}
