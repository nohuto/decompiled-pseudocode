/*
 * XREFs of ?Initialize@SC_MBR@@QEAAXPEAVSC_DISK@@@Z @ 0x1407207DC
 * Callers:
 *     ?CreatePartitionTable@SC_DISK@@QEAAJPEAU_CREATE_DISK@@@Z @ 0x14071FB08 (-CreatePartitionTable@SC_DISK@@QEAAJPEAU_CREATE_DISK@@@Z.c)
 *     ?ReadPartitionTable@SC_DISK@@QEAAJPEAPEAVSC_DISK_LAYOUT@@@Z @ 0x140720128 (-ReadPartitionTable@SC_DISK@@QEAAJPEAPEAVSC_DISK_LAYOUT@@@Z.c)
 *     ?WritePartitionTable@SC_DISK@@QEAAJPEAVSC_DISK_LAYOUT@@@Z @ 0x1407204DC (-WritePartitionTable@SC_DISK@@QEAAJPEAVSC_DISK_LAYOUT@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall SC_MBR::Initialize(SC_MBR *this, struct SC_DISK *a2)
{
  __int64 v3; // rax
  unsigned int v4; // ecx
  unsigned int v5; // ecx

  *(_QWORD *)this = a2;
  v3 = *((_QWORD *)a2 + 27);
  if ( !v3 || v3 > 1024 )
    *((_QWORD *)a2 + 27) = 1024LL;
  v4 = *(_DWORD *)(*(_QWORD *)this + 228LL);
  if ( !v4 || v4 > 0xFF )
    *(_DWORD *)(*(_QWORD *)this + 228LL) = 255;
  v5 = *(_DWORD *)(*(_QWORD *)this + 232LL);
  if ( !v5 || v5 > 0x3F )
    *(_DWORD *)(*(_QWORD *)this + 232LL) = 63;
}
