/*
 * XREFs of DeleteCriticalSection @ 0x14003F14C
 * Callers:
 *     sub_1400AF066 @ 0x1400AF066 (sub_1400AF066.c)
 *     sub_1400AF9A8 @ 0x1400AF9A8 (sub_1400AF9A8.c)
 *     sub_1400AF9D4 @ 0x1400AF9D4 (sub_1400AF9D4.c)
 *     sub_1400AFA06 @ 0x1400AFA06 (sub_1400AFA06.c)
 *     sub_1400AFA51 @ 0x1400AFA51 (sub_1400AFA51.c)
 *     sub_1400AFA83 @ 0x1400AFA83 (sub_1400AFA83.c)
 *     sub_1400B00BD @ 0x1400B00BD (sub_1400B00BD.c)
 *     sub_1400B070F @ 0x1400B070F (sub_1400B070F.c)
 *     sub_1400B102B @ 0x1400B102B (sub_1400B102B.c)
 *     sub_1400B1044 @ 0x1400B1044 (sub_1400B1044.c)
 *     sub_1400B1827 @ 0x1400B1827 (sub_1400B1827.c)
 *     sub_1400B40E8 @ 0x1400B40E8 (sub_1400B40E8.c)
 *     sub_1400B4133 @ 0x1400B4133 (sub_1400B4133.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall DeleteCriticalSection(LPCRITICAL_SECTION lpCriticalSection)
{
  __imp_DeleteCriticalSection(lpCriticalSection);
}
